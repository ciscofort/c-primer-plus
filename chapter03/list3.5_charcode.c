/* charcode.c -- 显示一个字符的编码值 */
#include <stdio.h>

int main(void)
{
	char ch;
	
	printf("Please enter a character: ");
	scanf("%c", &ch);	// 用户输入字符
	printf("The code for %c is %d.\n", ch, ch);
	
	getch();
	return 0;
}