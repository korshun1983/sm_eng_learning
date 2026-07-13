#include <stdio.h>

int sum_digits(int num){
	int sum = 0;
	int save_num = num;
	while (save_num>0){
		sum+=save_num%10;
		save_num/=10;
	}
	return sum;
}

int main(int argc, char **argv)
{
	int a;
	scanf("%d", &a);
	if(sum_digits(a)==10) printf("YES");
	else printf("NO");
	
	return 0;
}

