#include <stdio.h>

/**
 * Вычисляет наибольший общий делитель (НОД) двух натуральных чисел.
 * Алгоритм Евклида (итеративная версия).
 */
int nod(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int a, b;
    // Считываем два числа
    scanf("%d %d", &a, &b);
    // Вычисляем и выводим НОД
    printf("%d\n", nod(a, b));
    return 0;
}
