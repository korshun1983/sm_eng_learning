#include <stdio.h>

int main() {
    int num;
    //printf("Введите целое число: ");
    scanf("%d", &num);

    // Убираем знак, чтобы обрабатывать цифры по модулю
    if (num < 0) num = -num;

    int count = 0;   // счётчик для цифры 9

    while (num > 0) {
		if (num % 10 == 9) count++;
        
        num /= 10;
    }

    if (count == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
