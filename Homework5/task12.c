#include <stdio.h>

int main() {
    int num;
    //printf("Введите целое число: ");
    scanf("%d", &num);

    // Убираем знак, чтобы обрабатывать цифры по модулю
    if (num < 0) num = -num;
	int max_digit = -1; int min_digit = 10;
	
    while (num > 0) {
		int cur_digit = num%10;
		if(cur_digit < min_digit) min_digit = cur_digit;
		if(cur_digit > max_digit) max_digit = cur_digit;
        num /= 10;
    }

    printf("%d %d", min_digit, max_digit);

    return 0;
}
