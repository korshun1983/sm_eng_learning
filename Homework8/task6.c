#include <stdio.h>

int main() {
    int arr[12];
    int sum = 0;

    // Считываем 12 целых чисел и суммируем их
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Вычисляем среднее арифметическое
    double avg = (double)sum / 12.0;

    // Выводим результат с двумя знаками после запятой
    printf("%.2f\n", avg);

    return 0;
}
