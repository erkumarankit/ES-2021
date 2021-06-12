#include <stdio.h>

int main(){
	int i = 1;
	int temp;
	while(i>0){
		temp = i++;
	}
	printf("Maximum value is: %d\n", temp);
	printf("Minimum value is: %d", i);
}