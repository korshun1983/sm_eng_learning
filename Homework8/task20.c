#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    scanf("%s", num);
    int len = strlen(num);

    // Сортировка цифр по убыванию (пузырьковая)
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (num[j] < num[j + 1]) {
                char temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("%s\n", num);
    return 0;
}
