#include <stdio.h>

int main(){
	printf("Enter a sentence (end it with '.'): ");
	char c[20000];
	int i = 0;
	while((c[i]=getchar())!='.'){
		i++;
	}
	c[i] = '\0';
	int n;
	printf("Enter the number of times you want to print: ");
	scanf("%d", &n);
	for(int j=0; j<n; j++){
		int k = 0;
		while(c[k]!='\0'){
			printf("%c", c[k++]);
		
		}
		printf("\n");
	}
}
