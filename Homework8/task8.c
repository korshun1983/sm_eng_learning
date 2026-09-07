#include <stdio.h>

int main() {
    int arr[12];

    // Считываем 12 целых чисел
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    // Инверсия каждой трети массива (по 4 элемента)
    for (int start = 0; start < 12; start += 4) {
        // Меняем местами первый с последним, второй с третьим в пределах группы
        for (int i = 0; i < 2; i++) {
            int temp = arr[start + i];
            arr[start + i] = arr[start + 3 - i];
            arr[start + 3 - i] = temp;
        }
    }

    // Выводим изменённый массив одним циклом
    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
