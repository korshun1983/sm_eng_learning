#include <stdio.h>

int main(int argc, char **argv)
{
	int x1, x2, y1, y2;
	float K, B;
	
    printf("Input integer coordinates of two points in the following format : X1 Y1 X2 Y2\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    if (x1 == x2){
		printf("K is infinite, B = %.2f", (float)x1);
	}
	else{
		K = (y2-y1)/(x2-x1);
		B = y1 - K*x1;
		printf("%.2f %.2f",K,B);
	}
    
	return 0;
}
