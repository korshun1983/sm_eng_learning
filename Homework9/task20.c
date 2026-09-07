#include <stdio.h>
#include <stdlib.h>

// Произведение нечётных цифр числа
long long product_of_odd_digits(int n) {
    if (n < 0) n = -n;
    long long prod = 1;
    int has_odd = 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) {
            prod *= d;
            has_odd = 1;
        }
        n /= 10;
    }
    return has_odd ? prod : 1;
}

// Произведение чётных цифр числа
long long product_of_even_digits(int n) {
    if (n < 0) n = -n;
    long long prod = 1;
    int has_even = 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) {
            prod *= d;
            has_even = 1;
        }
        n /= 10;
    }
    return has_even ? prod : 1;
}

int main() {
    int a[10];
    int even_count = 0, odd_count = 0;

    // Ввод массива
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) even_count++;
        else odd_count++;
    }

    if (even_count > odd_count) {
        // Заменяем нечётные числа
        for (int i = 0; i < 10; i++) {
            if (a[i] % 2 != 0) {
                a[i] = (int)product_of_odd_digits(a[i]);
            }
        }
    } else {
        // Заменяем чётные числа
        for (int i = 0; i < 10; i++) {
            if (a[i] % 2 == 0) {
                a[i] = (int)product_of_even_digits(a[i]);
            }
        }
    }

    // Вывод результата
    for (int i = 0; i < 10; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}
