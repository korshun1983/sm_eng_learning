#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2, n3;
    //printf("Input three integers devided by spaces: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    printf("%d+%d+%d=%d", n1,n2,n3,n1+n2+n3);
	return 0;
}

