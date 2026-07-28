#include <stdio.h>

/**
 * Определяет, является ли символ c цифрой (0-9).
 * Возвращает 1, если c - цифра, иначе 0.
 */
int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    char c;
    int count = 0;

    // Читаем символы до точки (точку не учитываем)
    while ((c = getchar()) != '.') {
        if (is_digit(c)) {
            count++;
        }
    }

    // Выводим количество цифр
    printf("%d\n", count);

    return 0;
}
