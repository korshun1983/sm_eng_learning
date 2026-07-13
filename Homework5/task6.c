#include <stdio.h>

int main(int argc, char **argv)
{
	int num, found = 0;
	//printf("Input an integer:\n");
	scanf("%d", &num);
	
	int prev_digit, cur_digit;
	int counter =0;
	while(num>0){
		prev_digit = cur_digit;
		cur_digit=num%10;
		if(counter >0 && cur_digit==prev_digit){
			printf("%s", "YES");
			found =1;
			break;
		}
		num/=10;
		counter++;
	}
	
	if(found==0){
		printf("%s", "NO");
	}
	
	return 0;
}

