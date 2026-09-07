#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int first = 1;
    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count == 1) {
            if (!first) {
                printf(" ");
            }
            printf("%d", arr[i]);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
