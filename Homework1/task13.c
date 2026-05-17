#include <stdio.h>

int main(int argc, char **argv)
{
	int n, product_of_digits;
    //printf("Input a three digit integer: ");
    scanf("%d", &n);
    
    product_of_digits = (n/100) * ((n%100)/10) * ((n%100)%10);
    
    printf("%d", product_of_digits);
	return 0;
}
