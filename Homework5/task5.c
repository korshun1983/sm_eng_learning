#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	//printf("Input an integer:\n");
	scanf("%d", &num);
	
	int sum_of_digits =0;
	while(num>0){
		sum_of_digits+=num%10;
		num/=10;
	}
	printf("%d", sum_of_digits);
	
	return 0;
}

