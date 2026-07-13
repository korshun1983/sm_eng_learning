#include <stdio.h>

int mult_digits(int num){
	int mult = 1;
	int save_num = num;
	while (save_num>0){
		mult*=save_num%10;
		save_num/=10;
	}
	return mult;
}

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
	for(int i = 10; i<=a; i++){
		if(sum_digits(i)==mult_digits(i)) printf("%d ", i);
	}
	return 0;
}

