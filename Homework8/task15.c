#include <stdio.h>

int main() {
    int positive[10], negative[10];
    int pos_count = 0, neg_count = 0;
    int num;

    // Считываем 10 чисел и раскладываем по массивам
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num > 0) {
            positive[pos_count++] = num;
        } else if (num < 0) {
            negative[neg_count++] = num;
        }
        // нули игнорируются
    }

    int first = 1; // флаг первого выводимого числа

    // Вывод положительных
    for (int i = 0; i < pos_count; i++) {
        if (!first) {
            printf(" ");
        }
        printf("%d", positive[i]);
        first = 0;
    }

    // Вывод отрицательных
    for (int i = 0; i < neg_count; i++) {
        if (!first) {
            printf(" ");
        }
        printf("%d", negative[i]);
        first = 0;
    }

    printf("\n");
    return 0;
}
