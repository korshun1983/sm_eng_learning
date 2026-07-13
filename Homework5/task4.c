#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	//printf("Input an integer:\n");
	scanf("%d", &num);
	
	if (num >= 100 && num <=999){
		printf("%s", "YES");
	}
	else{
		printf("%s", "NO");
	}
	
	return 0;
}

