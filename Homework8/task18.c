#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int k = 2; k <= 9; k++) {
        // количество чисел от 2 до N, кратных k, равно N / k,
        // так как 1 не кратно k (k >= 2)
        int count = N / k;
        printf("%d %d\n", k, count);
    }

    return 0;
}
