#include <stdio.h>
#include <math.h>

/**
 * Проверяет, является ли число n простым.
 * Возвращает 1 (истина), если n простое, иначе 0 (ложь).
 * 0 и 1 не считаются простыми.
 */
int is_prime(int n) {
    if (n < 2) return 0;          // числа меньше 2 не простые
    if (n == 2) return 1;         // 2 – простое
    if (n % 2 == 0) return 0;     // чётные > 2 не простые

    int limit = (int)sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (is_prime(n))
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
