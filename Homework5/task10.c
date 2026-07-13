#include <stdio.h>

int main() {
    int num;
    //printf("Введите целое число: ");
    scanf("%d", &num);

    // Убираем знак
    if (num < 0) num = -num;

    // Однозначное число — условие выполнено
    if (num < 10) {
        printf("YES\n");
        return 0;
    }

    // Находим максимально близкое число вида 10^
    int div = 1;
    int temp = num;
    while (temp >= 10) {
        div *= 10;
        temp /= 10;
    }

    int prev = -1;          // предыдущая цифра (начальное значение неважно)
    int is_ascending = 1;   // флаг

    // Извлекаем цифры слева направо
    while (div > 0) {
        int digit = (num / div) % 10;   // текущая цифра

        if (prev != -1 && prev >= digit) {
            is_ascending = 0;
            break;
        }

        prev = digit;
        div /= 10;
    }

    printf("%s\n", is_ascending ? "YES" : "NO");
    return 0;
}
