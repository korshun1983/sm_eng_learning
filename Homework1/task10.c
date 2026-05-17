#include <stdio.h>

int main(int argc, char **argv)
{
	int n[5];
    printf("Input five integers devided by spaces: ");
    
    scanf("%d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4]);
	    
    int nmin = n[0];
    for (int i=1;i<5;i++){
		if (n[i]<=nmin){
			nmin = n[i];
		}
	}
	
	printf("%d", nmin);
	return 0;
}
