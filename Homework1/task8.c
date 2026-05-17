#include <stdio.h>

int main(int argc, char **argv)
{
	int n[3];
    //printf("Input three integers devided by spaces: ");
    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    
    int nm = n[0];
    for (int i=1;i<3;i++){
		if (n[i]>=nm){
			nm = n[i];
		}
	}
	
	printf("%d", nm);
	return 0;
}
