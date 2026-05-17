#include <stdio.h>

int main(int argc, char **argv)
{
	int n1, n2;
    //printf("Input two integers devided by spaces: ");
    scanf("%d %d", &n1, &n2);
    
    
    if(n1>n2){
		printf("Above");
	}
	else if(n2>n1){
		printf("Less");
	}
	else{
		printf("Equal");
	}
	return 0;
}


