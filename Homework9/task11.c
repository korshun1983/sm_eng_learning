#include <stdio.h>
#include <limits.h>

// Функция находит два элемента с минимальной суммой и выводит их индексы в порядке возрастания
void find_min_sum_pair(int size, int a[]) {
    int min_i = 0, min_j = 1;
    int min_sum = a[0] + a[1];
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int sum = a[i] + a[j];
            if (sum < min_sum) {
                min_sum = sum;
                min_i = i;
                min_j = j;
            }
        }
    }
    printf("%d %d\n", min_i, min_j);
}

int main() {
    int arr[30];
    for (int i = 0; i < 30; i++) {
        scanf("%d", &arr[i]);
    }
    find_min_sum_pair(30, arr);
    return 0;
}
