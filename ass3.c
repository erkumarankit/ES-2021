#include <stdio.h>

int main(){
	int x;
	printf("Enter the number: ");
	scanf("%d", &x);
	int sum = 0;
	int temp = x;
	if(temp < 0){
		temp*=(-1);
	}
	while(temp>0){
		sum+=(temp%10);
		temp/=10;
	}
	printf("Sum of all the digits of %d: %d", x, sum);
	
	return 0;
}
