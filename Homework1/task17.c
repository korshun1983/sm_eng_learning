#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
    printf("Input number of the month (1-12): ");
    scanf("%d", &n);
    
    n-=2;
    
    if (n <= 0 || n==10){
		printf("winter");
	}
	else if (n/4 == 0){
		printf("spring");
	}
	else if (n/4 == 1){
		printf("summer");
	}
	else{
		printf("autumn");
	}

	return 0;
}
