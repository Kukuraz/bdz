#include <ctype.h>
#include <limits.h>

int my_atoi(const char* str) {
    if (str == NULL) return 0;
    
    int i = 0;
    int sign = 1;
    long result = 0;  // Используем long для детекции переполнения
    
    // 1. Пропускаем ведущие пробелы
    while (isspace(str[i])) {
        i++;
    }
    
    // 2. Обрабатываем знак
    if (str[i] == '+' || str[i] == '-') {
        sign = (str[i] == '-') ? -1 : 1;
        i++;
    }
    
    // 3. Преобразуем цифры
    while (isdigit(str[i])) {
        int digit = str[i] - '0';
        result = result * 10 + digit;
        
        // 4. Проверка на переполнение
        if (sign == 1 && result > INT_MAX) {
            return INT_MAX;
        }
        if (sign == -1 && -result < INT_MIN) {
            return INT_MIN;
        }
        i++;
    }
    
    return (int)(sign * result);
}