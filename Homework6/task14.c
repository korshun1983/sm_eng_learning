#include <stdio.h>

/**
 * Определяет, является ли сумма цифр числа n чётной.
 * Возвращает 1 (истина), если сумма цифр чётна, иначе 0 (ложь).
 */
int is_sum_digits_even(int n) {
    int sum = 0;
    // Обрабатываем случай n = 0: сумма цифр = 0 (чётное)
    if (n == 0) return 1;
    
    while (n > 0) {
        sum += n % 10;   // добавляем последнюю цифру
        n /= 10;         // отбрасываем последнюю цифру
    }
    return (sum % 2 == 0);
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (is_sum_digits_even(n))
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
