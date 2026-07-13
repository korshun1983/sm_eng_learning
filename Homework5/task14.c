#include <stdio.h>

int main() {
    int num;
    int count = 0;

    //printf("Введите последовательность целых чисел (завершите 0):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;          // завершающий ноль – не считаем
        }
        count++;            // считаем только ненулевые числа
    }

    printf("%d", count);
    return 0;
}
