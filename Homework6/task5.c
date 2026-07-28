#include <stdio.h>

int sum1_N(int N) {
    return N*(N+1)/2;
}

int main() {
    int N;

    scanf("%d", &N);

    printf("%d\n", sum1_N(N));

    return 0;
}

