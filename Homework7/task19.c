#include <stdio.h>

// Рекурсивно считывает символы до точки и возвращает количество 'a'
int acounter(void) {
    int c = getchar();
    if (c == '.' || c == EOF) {
        return 0;               // конец строки
    }
    return (c == 'a') + acounter();
}

int main() {
    printf("%d\n", acounter());
    return 0;
}
