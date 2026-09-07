#include <stdio.h>

// Рекурсивная функция проверки числа на простоту.
// n — проверяемое число, delitel — текущий возможный делитель (начиная с 2).
// Возвращает 1, если число простое, и 0, если составное.
int is_prime(int n, int delitel) {
    // 1 и меньше не являются простыми
    if (n < 2) {
        return 0;
    }
    // Если делитель превысил sqrt(n), то делителей не найдено — число простое
    if (delitel * delitel > n) {
        return 1;
    }
    // Если n делится на delitel нацело, то число составное
    if (n % delitel == 0) {
        return 0;
    }
    // Проверяем следующий возможный делитель
    return is_prime(n, delitel + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    if (is_prime(n, 2)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
