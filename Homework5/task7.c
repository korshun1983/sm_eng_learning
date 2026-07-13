#include <stdio.h>

int main() {
    int num;
    //printf("Введите целое число: ");
    scanf("%d", &num);

    // Убираем знак, чтобы обрабатывать цифры по модулю
    if (num < 0) num = -num;

    int count[10] = {0};   // счётчики для цифр 0..9
    int has_dup = 0;       // 0 – повторов нет, 1 – есть

    // Особый случай: число 0 содержит только одну цифру 0 – повторов нет
    if (num == 0) {
        has_dup = 0;
    } else {
        while (num > 0) {
            int digit = num % 10;
            count[digit]++;
            if (count[digit] > 1) {
                has_dup = 1;
                break;
            }
            num /= 10;
        }
    }

    if (has_dup)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
