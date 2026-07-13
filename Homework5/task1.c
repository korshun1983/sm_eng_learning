#include <stdio.h>

int main(int argc, char **argv)
{
	int num = 0;
	//printf("Input an integer between 1 and 100:\n");
	scanf("%d", &num);
	
	if (num>0 && num<=100){
		for (int i=1;i<=num;i++){
			printf("%d %d %d\n", i, i*i, i*i*i);
		}
	}
	else{
		printf("Your number is out of bounds! Exit");
	}
	
	return 0;
}

