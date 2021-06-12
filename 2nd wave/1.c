#include <stdio.h>

int main(){
	char c = ' ';
	printf("Enter the character (enter '.' for termination): ");

	c = getchar();
	while(c!='.'){
		getchar();
		printf("The ASCII code for '%c' is %d\n", c, c);
		printf("Enter the character (enter '.' for termination): ");
		c = getchar();
	}
	printf("Thank you.");
	return 0;
}