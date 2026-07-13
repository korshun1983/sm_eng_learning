#include <stdio.h>

int main(int argc, char **argv)
{
	int a1 = 1, a2 = 1;
	int n;
	scanf("%d", &n);
	
	if (n==1) printf ("%d", a1);
	else{
		printf("%d %d ", a1, a2);
		for (int i = 0; i < n-2; i++){
			a2 = a1 + a2;
			a1 = a2 - a1;
			printf("%d ", a2);
		}
	}

	return 0;
}

