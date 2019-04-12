//使用逻辑与运算符,计算句子中除单引号和双引号之外的其他字符，并以.结尾
#include <stdio.h>
#define PERIOD '.'
int main(void)
{
	char ch;
	int charcount = 0;

	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch != '\'')
			charcount++;
	}
	printf("there are %d non-quote characters.\n", charcount);

	return 0;
}