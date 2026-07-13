#include <stdio.h>

int main() {
    char ch;

    // Читаем символы до точки ('.')
    while ((ch = getchar()) != '.') {
        // Если заглавная латинская буква, преобразуем в строчную
        if (ch >= 'A' && ch <= 'Z') {
            ch += 32;
        }
        putchar(ch);
    }

    return 0;
}
