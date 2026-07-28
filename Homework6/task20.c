#include <stdio.h>

#define MAX_LEN 1001   // 1000 символов + завершающий ноль

/**
 * Проверяет, является ли строка правильной скобочной последовательностью.
 * Возвращает 1, если скобки расставлены верно, иначе 0.
 */
int is_correct(const char* s) {
    int balance = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            balance++;
        } else if (s[i] == ')') {
            balance--;
            if (balance < 0) {
                return 0;   // закрывающая скобка без открывающей
            }
        }
        // остальные символы (если вдруг появятся) игнорируем
    }
    return balance == 0;
}

int main() {
    char str[MAX_LEN];
    int i = 0;
    char c;

    // Читаем символы до точки (точку не сохраняем)
    while ((c = getchar()) != '.' && i < MAX_LEN - 1) {
        str[i++] = c;
    }
    str[i] = '\0';   // завершаем строку

    if (is_correct(str))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
