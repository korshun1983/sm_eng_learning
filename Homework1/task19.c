#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
    //printf("Input three sides of a supposed triangle (integers devided by spaces): ");
    
    scanf("%d %d %d", &a, &b, &c);
	    
    if( a+b<=c || a+c<=b || b+c<=a){
		printf("NO");
	}
	else{
		printf("YES");
	}
	
	return 0;
}
