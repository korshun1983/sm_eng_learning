#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2;
    printf("Input two integers devided by spaces: ");
    scanf("%d %d", &n1, &n2);
    
    if (n1>=n2){
		printf("%d %d", n2,n1);
	}
	else{
		printf("%d %d", n1,n2);
	}
	return 0;
}
