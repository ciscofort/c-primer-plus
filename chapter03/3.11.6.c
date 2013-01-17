#include <stdio.h>

int main(void)
{
	float quarts;
	
	printf("Please input quarts: ");
	scanf("%f", &quarts);
	printf("There are %e water molecules.\n", quarts * 3.0e-23f * 950.0f);
	
	getch();
	return 0;
}