#include <stdio.h>

int pow10int(int n){
	int res = 1;
	if(n==0) return res;
	for(int i = 1;i <= n;i++){
		res *= 10;
	}
	return res;
}

int main() {
    int num;
    //printf("Введите целое число: ");
    scanf("%d", &num);

    // Убираем знак
    if (num < 0) num = -num;

    // Однозначное число выводим сразу
    if (num < 10) {
        printf("%d", num);
        return 0;
    }

    // Находим максимально близкое число вида 10^
    int div = 1;
    int temp = num;
    while (temp >= 10) {
        div *= 10;
        temp /= 10;
    }

    //int prev = -1;          // предыдущая цифра (начальное значение неважно)
    //int is_ascending = 1;   // флаг
	int out_num =0; // собираемое наоборот число
	int count = 0;
    // Извлекаем цифры слева направо
    while (div > 0) {
        int digit = (num / div) % 10;   // текущая цифра
		if (digit!=0) out_num += pow10int(count)*digit;
      
        div /= 10;
        count++;
    }

    printf("%d", out_num);
    return 0;
}
