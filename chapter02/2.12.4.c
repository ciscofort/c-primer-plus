#include <stdio.h>
void print1();
void print2();

int main(void)
{
	print1();
	print1();
	print1();
	print2();
	
	getchar();
	return 0;
}

void print1()
{
	printf("For he's a jolly good fellow!\n");
}

void print2()
{
	printf("Which nobody can deny!\n");
}