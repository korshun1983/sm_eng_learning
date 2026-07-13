#include <stdio.h>

int main() {
    int num;
    //printf("Введите целое число: ");
    scanf("%d", &num);

    // Убираем знак, чтобы обрабатывать цифры по модулю
    if (num < 0) num = -num;

    while (num > 0) {
		if ((num % 10) % 2 == 1) break;
        num /= 10;
    }

    if (num == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
