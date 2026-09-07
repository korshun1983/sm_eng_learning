#include <stdio.h>

void print_range(int a, int b) {
    // Базовый случай: если дошли до конечного числа
    if (a == b) {
        printf("%d ", a);
        return;
    }
    
    // Выводим текущее число
    printf("%d ", a);
    
    // Рекурсивно продолжаем в нужном направлении
    if (a < b) {
        print_range(a + 1, b);   // возрастание
    } else {
        print_range(a - 1, b);   // убывание
    }
}

int main() {
    int A, B;
    //printf("Введите два целых числа A и B: ");
    scanf("%d %d", &A, &B);

    //printf("Числа от %d до %d: ", A, B);
    print_range(A, B);
    printf("\n");

    return 0;
}
