#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>
#include <stdarg.h>
#include "safe_printf_lib.h"

#ifdef DEBUG
    #define info(...) safe_printf(__VA_ARGS__)
#else
    #define info(...)
#endif

int has_initialized = 0;
void *managed_memory_start;
void *last_valid_address;

struct mem_control_block {
    int is_available;
    int size;
};

void malloc_init() {
    last_valid_address = sbrk(0);       // текущий конец кучи
    managed_memory_start = last_valid_address;
    has_initialized = 1;
    info("malloc_init: heap starts at %p\n", managed_memory_start);
}

void *malloc(long numbytes) {
    if (!has_initialized)
        malloc_init();

    void *current = managed_memory_start;
    struct mem_control_block *mcb;

    // ищем подходящий свободный блок
    while (current < last_valid_address) {
        mcb = (struct mem_control_block *)current;
        if (mcb->is_available && mcb->size >= numbytes) {
            mcb->is_available = 0;
            info("malloc: reuse block at %p, size %d\n", current, mcb->size);
            return current + sizeof(struct mem_control_block);
        }
        current += sizeof(struct mem_control_block) + mcb->size;
    }

    // свободного блока нет — запрашиваем новую память у ОС
    long total = sizeof(struct mem_control_block) + numbytes;
    if (sbrk(total) == (void *)-1) {
        info("malloc: sbrk failed\n");
        return NULL;
    }

    mcb = (struct mem_control_block *)last_valid_address;
    mcb->is_available = 0;
    mcb->size = numbytes;

    void *result = last_valid_address + sizeof(struct mem_control_block);
    last_valid_address += total;

    info("malloc: new block at %p, size %ld\n", (void*)mcb, numbytes);
    return result;
}

void free(void *firstbyte) {
    if (firstbyte == NULL)
        return;

    struct mem_control_block *mcb;
    mcb = (struct mem_control_block *)(firstbyte - sizeof(struct mem_control_block));
    mcb->is_available = 1;

    info("free: block at %p, size %d marked free\n", (void*)mcb, mcb->size);
}