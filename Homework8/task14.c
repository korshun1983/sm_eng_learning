#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int first_output = 1; // нужно ли ставить пробел перед числом
    for (int i = 0; i < 10; i++) {
        // Проверяем, не встречался ли элемент arr[i] ранее
        int seen = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                seen = 1;
                break;
            }
        }
        if (seen) continue; // если значение уже обработано, пропускаем

        // Подсчитываем частоту встречаемости arr[i]
        int count = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > 1) {
            if (!first_output) {
                printf(" ");
            }
            printf("%d", arr[i]);
            first_output = 0;
        }
    }
    printf("\n");
    return 0;
}
