#include <stdio.h>

// Рекурсивная функция для вывода цифр числа в обратном порядке
void print_digits_reverse(int n) {
    // Базовый случай: если число однозначное, просто выводим его
    if (n < 10) {
        printf("%d ", n);
        return;
    }
    // Рекурсивный случай: выводим последнюю цифру,
    // затем обрабатываем оставшуюся часть числа
    printf("%d ", n % 10);
    print_digits_reverse(n / 10);
}

int main() {
    int N;
    scanf("%d", &N);

    print_digits_reverse(N);

    return 0;
}
