/* strings.c -- 字符串格式化 */
#include <stdio.h>
#define BLURB "Authentic imitation! "

int main(void)
{
	printf("/%2s/\n", BLURB);
	printf("/%24s/\n", BLURB);
	printf("/%24.5s/\n", BLURB);
	printf("/%-24.5s/\n", BLURB);
	
	getch();
	return 0;
}