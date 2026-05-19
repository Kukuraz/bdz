#include <stdio.h>

/*
 * Функция my_strcat добавляет строку src в конец строки dest.
 * Важно: dest должен быть достаточно большим, чтобы вместить обе строки + '\0'.
 */
char* my_strcat(char* dest, const char* src) {
    // 1. Находим конец строки dest (переходим к нуль-терминатору)
    char* ptr = dest;
    while (*ptr != '\0') {
        ptr++;
    }

    // 2. Копируем символы из src в конец dest
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    // 3. Добавляем нуль-терминатор в конец новой строки
    *ptr = '\0';

    // 4. Возвращаем указатель на начало dest
    return dest;
}

int main() {
    // Создаем буфер достаточного размера
    char str1[50] = "Hello, ";
    char str2[] = "World!";

    printf("До: %s\n", str1);

    // Вызываем нашу функцию
    my_strcat(str1, str2);

    printf("После: %s\n", str1);

    return 0;
}