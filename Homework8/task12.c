#include <stdio.h>

// Сортировка части массива по возрастанию (пузырьком)
void sort_asc(int arr[], int start, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = start; j < start + len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Сортировка части массива по убыванию (пузырьком)
void sort_desc(int arr[], int start, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = start; j < start + len - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[10];

    // Считываем 10 целых чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Первая половина (индексы 0..4) — по возрастанию
    sort_asc(arr, 0, 5);
    // Вторая половина (индексы 5..9) — по убыванию
    sort_desc(arr, 5, 5);

    // Выводим результат
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
