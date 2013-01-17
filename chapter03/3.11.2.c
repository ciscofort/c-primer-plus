#include <stdio.h>

int main(void)
{
	char ascii;
	
	printf("Please input an ASCII code value: ");
	scanf("%d", &ascii);
	printf("ASCII %d is the character %c.\n", ascii, ascii);
	
	getch();
	return 0;
}