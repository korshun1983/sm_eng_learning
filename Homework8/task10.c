#include <stdio.h>

int main() {
    int arr[12];
    int temp[4];

    // Считываем 12 целых чисел
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    // Сохраняем последние 4 элемента во временный массив
    for (int i = 0; i < 4; i++) {
        temp[i] = arr[8 + i];   // индексы 8, 9, 10, 11
    }

    // Сдвигаем первые 8 элементов вправо на 4 позиции
    for (int i = 7; i >= 0; i--) {
        arr[i + 4] = arr[i];
    }

    // Переносим сохранённые элементы в начало
    for (int i = 0; i < 4; i++) {
        arr[i] = temp[i];
    }

    // Выводим сдвинутый массив
    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
