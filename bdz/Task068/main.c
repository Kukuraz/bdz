#include <stdio.h>

/*
 * Реализация функции strcmp
 * Возвращает:
 *   0          — если строки равны
 *   < 0        — если str1 лексикографически меньше str2
 *   > 0        — если str1 лексикографически больше str2
 */
int my_strcmp(const char *str1, const char *str2) {
    // Идем по строкам, пока символы равны И мы не дошли до конца строки
    while (*str1 != '\0' && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    
    // Возвращаем разность кодов первых отличающихся символов
    // (или разность между символом и '\0', если одна строка короче другой)
    return *str1 - *str2;
}

int main() {
    // Тест 1: Строки равны
    int res1 = my_strcmp("Hello", "Hello");
    printf("Hello vs Hello: %d\n", res1); 

    // Тест 2: Первая строка меньше (A < B)
    // 'A' (65) - 'B' (66) = -1
    int res2 = my_strcmp("Apple", "Banana");
    printf("Apple vs Banana: %d\n", res2); 

    // Тест 3: Первая строка больше (Z > A)
    // 'Z' (90) - 'A' (65) = 25
    int res3 = my_strcmp("Zebra", "Apple");
    printf("Zebra vs Apple: %d\n", res3);

    // Тест 4: Одинаковое начало, но разная длина
    // ' ' (32) - '\0' (0) = 32 (т.к. "Cat " длиннее, чем "Cat")
    // Но если наоборот: '\0' (0) - ' ' (32) = -32
    int res4 = my_strcmp("Cat", "Caterpillar");
    printf("Cat vs Caterpillar: %d\n", res4);

    return 0;
}