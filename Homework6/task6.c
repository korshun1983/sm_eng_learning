#include <stdio.h>
#include <stdint.h>

uint64_t seeds_in_cell(int N) {
	if(N==1) return 1;
	
	int64_t seeds = 1;
	for(int i = 0;i<N-1;i++) seeds*=2;
    return seeds;
}

int main() {
    int N;

    scanf("%d", &N);

    printf("%llu\n", seeds_in_cell(N));

    return 0;
}

