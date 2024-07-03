#include <stdio.h>
int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
	double S = (a + b) / 2;
	printf("%.2lf", S);
	return 0;
}