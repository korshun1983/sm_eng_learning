#include <stdio.h>

// Функция вычисляет след квадратной матрицы размера n x n
int trace(int n, int a[][n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    return sum;
}

int main() {
    int a[5][5];
    // Считываем 25 чисел
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Выводим след матрицы
    printf("%d\n", trace(5, a));
    return 0;
}
