#include <stdio.h>

int main(){
	char c[200000];
	int i = 0;
	printf("Enter the char: ");
	while((c[i]=getchar())!='\n'){
		i++;
		printf("Enter the char: ");
	}
	c[i] = '\0';
	int sum = 0;
	for(int k=0; k<i; k++){
		sum+=(int)c[k];
	}
	printf("The sum of ASCII: ");
	printf("%d\n", sum);
}