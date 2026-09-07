#include <stdio.h>

// Функция возвращает последнюю цифру числа (всегда неотрицательную)
int last_digit(int n) {
    int d = n % 10;
    if (d < 0) {
        d = -d;
    }
    return d;
}

int main() {
    int arr[10];

    // Считываем 10 целых чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Сортировка пузырьком по возрастанию последней цифры
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            // Сравниваем последние цифры соседних элементов
            if (last_digit(arr[j]) > last_digit(arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Выводим отсортированный массив
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
