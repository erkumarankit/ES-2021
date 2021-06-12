#include <stdio.h>

int main(){
	printf("Enter a sentence (end it with '.'): ");
	char c[20000];
	int i = 0;
	while((c[i]=getchar())!='.'){
		i++;
	}
	c[i] = '\0';
	char comp[2000];
	int j = 0;
	while(c[j]!='\0'){
		if(c[j]=='\n' || c[j]=='\t' || c[j]==' '){
			comp[j] = ' ';
		}
		else {
			comp[j] = c[j];
		}
		j++;
	}
	printf("The compacted sentence is: ");
	j = 0;
	while(comp[j]!='\0'){
		printf("%c", comp[j]);
		j++;
	}
}