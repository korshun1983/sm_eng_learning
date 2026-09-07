#include <stdio.h>
#include <string.h>

// Функция подсчитывает количество вхождений каждой цифры в строке
// и выводит цифры в порядке возрастания с их частотами.
void print_digit_frequencies(const char *num) {
    int count[10] = {0};

    // Подсчёт частот цифр
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            count[num[i] - '0']++;
        }
    }

    // Вывод цифр, которые встречаются, в порядке возрастания
    for (int d = 0; d < 10; d++) {
        if (count[d] > 0) {
            printf("%d %d\n", d, count[d]);
        }
    }
}

int main() {
    char num[1001]; // максимум 1000 цифр + символ конца строки
    scanf("%1000s", num);
    print_digit_frequencies(num);
    return 0;
}
