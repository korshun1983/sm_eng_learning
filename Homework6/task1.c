#include <stdio.h>

int abs_(int n){
	if (n>=0) return n;
	else return -n;
}

int main(int argc, char **argv)
{
	int num;
    //printf("Введите целое число: ");
    scanf("%d", &num);
    
    printf("%d", abs_(num));
    
	return 0;
}

