#include <stdio.h>

unsigned long long decimal_to_base(int N, int P) {
    if (N == 0) return 0;

    int digits[64];
    int count = 0;

    while (N > 0) {
        digits[count++] = N % P;
        N /= P;
    }

    unsigned long long result = 0;
    for (int i = count - 1; i >= 0; i--) {
        result = result * 10 + digits[i];
    }
    return result;
}

int main() {
    int N, P;
    scanf("%d %d", &N, &P);      // считываем два числа без приглашения
    unsigned long long res = decimal_to_base(N, P);
    printf("%llu\n", res);       // только число и перевод строки
    return 0;
}
