#include <stdio.h>

int main() {
    int arr[10];

    // Считываем 10 целых чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Инициализируем максимум и минимум первым элементом
    int max = arr[0];
    int min = arr[0];
    int max_index = 1; // номера считаются с 1
    int min_index = 1;

    // Проходим по остальным элементам
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i + 1;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i + 1;
        }
    }

    // Выводим результат
    printf("%d %d %d %d\n", max_index, max, min_index, min);

    return 0;
}
