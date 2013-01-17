#include <stdio.h>

int main(void)
{
	float height;
		
	printf("Please input your height (cm): ");
	scanf("%f", &height);
	printf("Your height is %.2f inches.", height * 0.3937f);
	
	getch();
	return 0;
}