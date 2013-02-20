﻿/* input.c -- 什么情况下使用 & */
#include <stdio.h>

int main(void)
{
	int age;		// 变量
	float assets;	// 变量
	char pet[30];	// 字符串
	
	printf("Enter your age, assets, and favorite pet.\n");
	scanf("%d %f", &age, &assets);	// 此处需要使用 &
	scanf("%s", pet);				// 对 char 数组不需要使用 &
	printf("%d $%.2f %s\n", age, assets, pet);
	
	getch();
	return 0;
}