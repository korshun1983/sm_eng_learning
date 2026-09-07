#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int max_count = 0;
    int most_frequent = arr[0];

    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            most_frequent = arr[i];
        }
    }

    printf("%d\n", most_frequent);
    return 0;
}
