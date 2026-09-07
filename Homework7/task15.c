#include <stdio.h>

// Рекурсивно считывает числа последовательности и возвращает максимум.
// max — текущий максимум среди уже обработанных чисел.
int max_find(int max) {
    int x;
    if (scanf("%d", &x) != 1) {
        return max;          // если ввод закончился (на случай отсутствия 0)
    }
    if (x == 0) {
        return max;          // встретили завершающий ноль — возвращаем максимум
    }
    if (x > max) {
        max = x;
    }
    return max_find(max);    // обрабатываем следующее число
}

int main() {
    int first;
    if (scanf("%d", &first) != 1) {
        return 0;            // нет данных
    }
    // По условию первое число ненулевое, но на всякий случай проверим
    if (first == 0) {
        printf("0\n");
        return 0;
    }
    printf("%d\n", max_find(first));
    return 0;
}
