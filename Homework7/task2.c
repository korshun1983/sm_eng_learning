#include <stdio.h>

int sum1_to_N(int N){
	if (N<1) return 0;
	else{
		return sum1_to_N(N-1) + N;
	}
}

int main() {
	int N;
    scanf("%d", &N);
    printf("%d", sum1_to_N(N));

    return 0;
}
