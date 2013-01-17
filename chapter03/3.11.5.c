#include <stdio.h>

int main(void)
{
	short age;
	
	printf("Please input your age: ");
	scanf("%d", &age);
	printf("Convert %d years to %f seconds.\n", age, age * 3.156e7);
	
	getch();
	return 0;
}