#include <stdio.h>

void reverse_string() {
    char c = getchar();          // считываем очередной символ
    if (c == '.') {              // базовый случай: встретили точку — конец строки
        return;
    }
    reverse_string();            // сначала обрабатываем оставшуюся часть строки
    putchar(c);                  // после возврата из рекурсии печатаем текущий символ
}

int main() {
    reverse_string();            // запускаем рекурсивное считывание и вывод
    printf("\n");
    return 0;
}
