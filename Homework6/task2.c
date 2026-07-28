#include <stdio.h>

int pow_n_p(int n, int p){
	if (p==0) return 1;
	else{
		int ans = 1;
		for(int i = 0;i<p;i++){
			ans*=n;
		}
		return ans;
	}
}

int main(int argc, char **argv)
{
	int num, p;
    //printf("Введите целое число: ");
    scanf("%d %d", &num, &p);
    
    printf("%d", pow_n_p(num, p));
    
	return 0;
}

