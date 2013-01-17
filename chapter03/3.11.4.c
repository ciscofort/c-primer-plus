#include <stdio.h>

int main(void)
{
	float num;
	
	printf("Please input a floating-point number: ");
	scanf("%f", &num);
	printf("The input is %f or %e.\n", num, num);
	
	getch();
	return 0;
}