#include <stdio.h>

/**
 * Печатает все простые множители числа n в порядке возрастания.
 * Например: для 12 печатает "2 2 3", для 120 – "2 2 2 3 5".
 */
void print_simple(int n) {
    int first = 1;      // флаг, указывающий, что это первый выводимый множитель
    int d = 2;

    // Перебираем возможные делители до sqrt(n)
    while (d * d <= n) {
        while (n % d == 0) {
            if (!first) printf(" ");
            printf("%d", d);
            first = 0;
            n /= d;
        }
        d++;
    }

    // Если после делений осталось простое число > 1
    if (n > 1) {
        if (!first) printf(" ");
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    print_simple(n);
    return 0;
}
