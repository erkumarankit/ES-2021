#include <stdio.h>
#include <math.h>

int main(){
	double x, y;
	printf("Enter the value of x: ");
	scanf("%lf", &x);
	printf("Enter the value of y: ");
	scanf("%lf", &y);
	double res = (13*pow(x,3) + 22*(pow(x,2)*y) + 19*x*pow(y,2) + 34*pow(y,3))/(x*y);
	printf("Value of (13x^3 + 22x^2y + 19xy^2 + 34y^3)/(xy): %lf", res);
	return 0;
}