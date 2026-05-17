#include <stdio.h>

int main(int argc, char **argv)
{
	int n[3];
    //printf("Input three integers devided by spaces: ");
    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    
	if (n[1]>n[0] && n[2]>n[1]){
		printf("YES");
	}
	else{	
		printf("NO");
	}
	return 0;
}
