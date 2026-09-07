#include <stdio.h>

// Рекурсивно печатает число num заданное количество раз (count)
void print_number(int num, int count) {
    if (count == 0) {
        return;
    }
    printf("%d ", num);
    print_number(num, count - 1);
}

// Рекурсивно выводит первые n элементов последовательности,
// начиная с числа current
void print_sequence(int n, int current) {
    if (n <= 0) {
        return;
    }
    if (n <= current) {
        // Если осталось вывести меньше или столько же, сколько раз нужно повторить current,
        // печатаем current ровно n раз и завершаем
        print_number(current, n);
    } else {
        // Иначе печатаем current ровно current раз,
        // затем переходим к следующему числу
        print_number(current, current);
        print_sequence(n - current, current + 1);
    }
}

int main() {
    int n;
    //printf("Введите n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n должно быть неотрицательным.\n");
        return 1;
    }

    print_sequence(n, 1);
    printf("\n");

    return 0;
}
