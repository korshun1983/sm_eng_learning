#include <stdio.h>

// Рекурсивная функция печати простых множителей.
// n        — текущее число для разложения,
// div      — текущий проверяемый делитель (начинать с 2),
// is_first — указатель на флаг первого выводимого множителя (для управления пробелами).
void print_prime_factors(int n, int div, int *is_first) {
    // Базовый случай: число разложено полностью
    if (n == 1) {
        return;
    }
    // Если n делится на div, выводим множитель и продолжаем с тем же div
    if (n % div == 0) {
        // Перед множителем ставим пробел, если он не первый
        if (*is_first) {
            *is_first = 0;
        } else {
            printf(" ");
        }
        printf("%d", div);
        print_prime_factors(n / div, div, is_first);
    } else {
        // Иначе пробуем следующий кандидат в делители
        print_prime_factors(n, div + 1, is_first);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // Для n = 1 простых множителей нет — ничего не выводим
    if (n > 1) {
        int is_first = 1;
        print_prime_factors(n, 2, &is_first);
        printf("\n");
    }

    return 0;
}
