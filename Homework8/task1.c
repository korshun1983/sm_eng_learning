#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    // Считываем 5 целых чисел и сразу суммируем их
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Вычисляем среднее как вещественное число
    double average = (double)sum / 5.0;

    // Выводим с тремя знаками после запятой
    printf("%.3f\n", average);

    return 0;
}
