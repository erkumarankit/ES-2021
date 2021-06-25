#include <stdio.h>

int main(){
	int n1, n2;
	printf("Enter n1 and n2: ");
	scanf("%d %d", &n1, &n2);
	int start = n1;
	if(start%2!=0){
		start = n1+1;
	}
	printf("Even numbers: ");
	for(int i=start; i<=n2; i+=2){
		printf("%d ", i);
	}
}