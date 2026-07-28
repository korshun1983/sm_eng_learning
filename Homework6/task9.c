#include <stdio.h>


long long int factorial(int n) {
    if (n < 0) return 0;   // факториал отрицательных не определён
    if (n == 0) return 1;  // 0! = 1

    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);                // читаем n
    printf("%lld\n", factorial(n));   // выводим n!
    return 0;
}
