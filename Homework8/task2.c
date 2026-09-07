#include <stdio.h>

int main() {
    int arr[5];

    // Считываем 5 чисел в массив
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Инициализируем минимум первым элементом
    int min = arr[0];

    // Сравниваем с остальными элементами
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Выводим минимальное число
    printf("%d\n", min);

    return 0;
}
