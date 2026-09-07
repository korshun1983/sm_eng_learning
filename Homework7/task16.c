#include <stdio.h>

// Рекурсивная проверка: является ли n точной степенью двойки
int is2pow(int n) {
    if (n <= 0) return 0;      // не натуральное или 0
    if (n == 1) return 1;      // 2^0 = 1
    if (n % 2 != 0) return 0;  // нечётное, кроме 1, не может быть степенью двойки
    return is2pow(n / 2);      // делим на 2 и проверяем дальше
}

int main() {
    int n;
    scanf("%d", &n);
    if (is2pow(n))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
