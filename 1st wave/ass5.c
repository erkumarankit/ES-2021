#include <stdio.h>

int main(){
	int x, y;
	printf("Enter the numbers: ");
	scanf("%d %d", &x, &y);
	while(x>0 || y>0){
		if(x>0){
			printf("%d", (x%10));
			x/=10;
		}
		if(y>0){
			printf("%d", (y%10));
			y/=10;
		}
	}
	printf("\n");
}