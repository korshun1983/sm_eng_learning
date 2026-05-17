#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
    //printf("Input number of the month (1-12): ");
    scanf("%d", &n);
    
    if (n <= 2 || n==12){
		printf("winter");
	}
	else if (n>2 && n<=5){
		printf("spring");
	}
	else if (n>5 && n<=8){
		printf("summer");
	}
	else{
		printf("autumn");
	}

	return 0;
}
