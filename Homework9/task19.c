#include <stdio.h>

// Функция вычисления среднего арифметического главной диагонали матрицы
double avg_main_diag(int n, int a[][n]) {
    long long sum = 0;          // используем long long для суммы
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    return (double)sum / n;     // возвращаем вещественное среднее
}

int main() {
    int matrix[5][5];

    // Считываем матрицу 5x5
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    double avg = avg_main_diag(5, matrix);  // среднее главной диагонали

    int count = 0;
    // Считаем положительные элементы, превышающие среднее
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] > 0 && matrix[i][j] > avg) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
