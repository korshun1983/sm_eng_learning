#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b;

    //printf("Введите два целых неотрицательных числа:\n");
	scanf("%d %d", &a, &b);
	
	if (a>0 && b>0){
		
		if (a<=b) {
			a = a + b;
			b = a - b;
			a = a - b;
			//printf("%d %d\n",a , b);
		}
		
		while(b != 0){
			int rem = a%b;
			a=b;
			b=rem;
			}
		
    printf("%d", a);
    return 0;
}

}
