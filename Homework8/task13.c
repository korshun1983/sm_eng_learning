#include <stdio.h>
#include <stdlib.h> // для abs (если нужно)

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int first = 1;
    for (int i = 0; i < 10; i++) {
        int n = arr[i];
        if (n < 0) n = -n;           // работаем с абсолютным значением
        if ((n / 10) % 10 == 0) {    // вторая с конца цифра равна нулю
            if (first) {
                printf("%d", arr[i]);
                first = 0;
            } else {
                printf(" %d", arr[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
