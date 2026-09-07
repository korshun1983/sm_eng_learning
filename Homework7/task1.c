#include <stdio.h>

void print1_to_N(int N){
	if (N<1) return;
	else{
		print1_to_N(N-1);
		printf("%d ", N);
	}
}

int main() {
	int N;
    scanf("%d", &N);
    print1_to_N(N);

    return 0;
}
