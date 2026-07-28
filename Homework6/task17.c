#include <stdio.h>

/**
 * Проверяет, равна ли сумма цифр числа их произведению.
 * Возвращает 1 (истина), если сумма равна произведению, иначе 0 (ложь).
 */
int is_happy_number(int n) {
    if (n == 0) return 1;  // 0: сумма = 0, произведение = 0 → YES
    
    int sum = 0;
    long long prod = 1;    // произведение может быть большим
    int temp = n;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        prod *= digit;
        temp /= 10;
    }
    
    return (sum == prod) ? 1 : 0;
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (is_happy_number(n))
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
