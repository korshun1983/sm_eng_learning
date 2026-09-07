#include <stdio.h>

int main() {
    int arr[10];
    
    // Считываем 10 целых чисел
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Инверсия первой половины (индексы 0..4)
    for (int i = 0; i < 2; i++) {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    
    // Инверсия второй половины (индексы 5..9)
    for (int i = 0; i < 2; i++) {
        int temp = arr[5 + i];
        arr[5 + i] = arr[9 - i];
        arr[9 - i] = temp;
    }
    
    // Вывод изменённого массива одним циклом
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
