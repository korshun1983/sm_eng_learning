#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	
	bool is_prime = true;
	
	if (a<2) is_prime = false;
	else{
		for(int i = 2; i<a/2; i++){
			if (a%i==0){
				is_prime = false;
				break;
				}
		}
	}

	if (is_prime) printf("YES");
	else printf("NO");
	
    return 0;
}


