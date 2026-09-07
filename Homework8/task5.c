#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    // Считываем 10 целых чисел и суммируем положительные
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }

    // Выводим сумму положительных элементов
    printf("%d\n", sum);

    return 0;
}
