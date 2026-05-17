#include <stdio.h>

int main(int argc, char **argv)
{
	int n, max_of_digits, digit;
    //printf("Input a three digit integer: ");
    scanf("%d", &n);
    
    max_of_digits = n%10;
    
    while (n > 0){
		digit = n%10;
		if (digit >= max_of_digits){
			max_of_digits = digit;
		}
		n /=10;
	}
    
    printf("%d", max_of_digits);
	return 0;
}
