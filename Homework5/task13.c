#include <stdio.h>

int main() {
    int num;
    //printf("Введите целое число: ");
    scanf("%d", &num);

    // Убираем знак, чтобы обрабатывать цифры по модулю
    if (num < 0) num = -num;
	int odd_digits = 0; int even_digits = 0;
	
    while (num > 0) {
		int cur_digit = num%10;
		if(cur_digit %2 == 0) even_digits++;
		else odd_digits++;
        num /= 10;
    }

    printf("%d %d", even_digits, odd_digits);

    return 0;
}
