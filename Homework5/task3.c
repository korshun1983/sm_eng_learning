#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b;
	//printf("Input two integers a<=b:\n");
	scanf("%d %d", &a, &b);
	
	if (b>=a){
		int sum = 0;
		for (int i=a;i<=b;i++){
			sum += i*i;
		}
		printf("%d", sum);
	}
	else{
		printf("Your numbers do not follow condition a<=b! Exit");
	}
	
	return 0;
}

