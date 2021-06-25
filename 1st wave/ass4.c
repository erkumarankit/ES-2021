#include <stdio.h>

int sumOfDigits(int x){
	int sum = 0;
	if(x < 0){
		x*=(-1);
	}
	while(x>0){
		sum+=(x%10);
		x/=10;
	}
	return sum;
}
int main(){
	int sum = 0;
	int x = -1;
	int count = 0;
	while(x!=0){
		printf("Enter the number (Give 0 to finish.): ");
		scanf("%d", &x);
		sum+=sumOfDigits(x);
		count++;
	}
	printf("The sum of the given %d numbers is %d.", count-1, sum);
}