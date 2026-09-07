#include <stdio.h>

int sum_digits(int n) {
    // Базовый случай: однозначное число — сумма равна самому числу
    if (n < 10) {
        return n;
    }
    // Рекурсивный случай: последняя цифра + сумма цифр оставшейся части
    return (n % 10) + sum_digits(n / 10);
}

int main() {
    int N;
   // printf("Введите натуральное число: ");
    scanf("%d", &N);

    printf("%d", sum_digits(N));
    return 0;
}
