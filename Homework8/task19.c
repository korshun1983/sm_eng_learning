#include <stdio.h>

// Рекурсивно выводит цифры числа в прямом порядке (от старшей к младшей)
void print_digits_forward(int n) {
    if (n < 10) {
        printf("%d", n);      // базовый случай: одна цифра
        return;
    }
    print_digits_forward(n / 10);   // сначала обрабатываем старшие разряды
    printf(" %d", n % 10);          // затем выводим текущую последнюю цифру
}

int main() {
    int N;
    scanf("%d", &N);
    print_digits_forward(N);
    printf("\n");
    return 0;
}
