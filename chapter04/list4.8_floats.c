/* floats.c -- 一些浮点数的组合 */
#include <stdio.h>

int main(void)
{
	const double RENT = 3852.99;	// 以 const 方法定义的常量
	
	printf("*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f*\n", RENT);
	printf("*%3.1f*\n", RENT);
	printf("*%11.3f*\n", RENT);
	printf("*%11.3e*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%011.2f*\n", RENT);
	
	getch();
	return 0;
}