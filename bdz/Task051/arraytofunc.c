#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 10;

void increase_array_size(int **a, int n, int n_new) { 
    int *q; 
    q = (int*) realloc(*a, n_new*sizeof(int));
    if (q==NULL) { /* проверка успешности увеличения памяти */
        printf("Error increase array size");
    }
    else {
        *a = q;
    }
}

void init_arr(int* arr, int N){
for (size_t i = 0; i < N; i++)
    {
        arr[i] = rand() % 100;
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void print_arr(int* arr, int N) {
    for (size_t i = 0; i < N; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    int* ptr = (int*)malloc(N * sizeof(int));
    
  init_arr(ptr, N);
    printf("До:    ");
    print_arr(ptr, N);

    increase_array_size(&ptr, N, N + 20);
    // старые 10 элементов НЕ трогаем
    init_arr(ptr + N, 20);   // заполняем только новые 20

    printf("После: ");
    print_arr(ptr, N + 20);  // печатаем все 30

   
    free(ptr);
    return 0;
}
