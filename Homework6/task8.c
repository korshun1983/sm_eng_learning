#include <stdio.h>

char to_upper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';   // сдвиг в диапазон заглавных
    }
    return c;
}

int main() {
    char c;

    // Читаем символы до точки (точку не выводим)
    while ((c = getchar()) != '.') {
        putchar(to_upper(c));   // преобразуем и выводим
    }
    putchar('\n'); // завершаем строку (по желанию)

    return 0;
}
