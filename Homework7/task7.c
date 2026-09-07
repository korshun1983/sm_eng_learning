#include <stdio.h>

void print_N_to_1(int n) {
    // Базовый случай: если n меньше 1, ничего не выводим
    if (n < 1) {
        return;
    }
    // Рекурсивный случай: сначала печатаем текущее число n,
    // затем вызываем функцию для n-1
    printf("%d ", n);
    print_N_to_1(n - 1);
}

int main() {
    int N;
    //printf("Введите целое число N: ");
    scanf("%d", &N);

    //printf("Числа от %d до 1:\n", N);
    print_N_to_1(N);
    printf("\n");

    return 0;
}
