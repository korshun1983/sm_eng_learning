#include <stdio.h>

int main() {
    int arr[10];

    // Считываем 10 целых чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Сохраняем последний элемент
    int temp = arr[9];

    // Сдвигаем все элементы вправо на одну позицию
    for (int i = 8; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Ставим сохранённый элемент на первое место
    arr[0] = temp;

    // Выводим массив
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
