#include <stdio.h>

// Функция поиска максимального элемента в строке из 10 элементов
int max_in_row(int row[10]) {
    int max = row[0];
    for (int i = 1; i < 10; i++) {
        if (row[i] > max) {
            max = row[i];
        }
    }
    return max;
}

int main() {
    int matrix[10][10];

    // Считываем матрицу 10x10
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    // Суммируем максимальные элементы каждой строки
    for (int i = 0; i < 10; i++) {
        sum += max_in_row(matrix[i]);
    }

    printf("%d\n", sum);
    return 0;
}
