#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);//转换大写
int PunctCount(const char *);//统计标点符号个数

int main(void)
{
	char line[LIMIT];
	char *find;

	puts("please enter a line:");
	fgets(line, LIMIT, stdin);
	find = strchr(line, '\n');//查找换行符
	if (find)//如果地址不是NULL
		*find = '\0';//用空字符替换
	ToUpper(line);
	puts(line);
	printf("that line has %d punctuation characters.\n", PunctCount(line));
	return 0;
}

void ToUpper(char *str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

int PunctCount(const char *str)
{
	int ct = 0;
	while (*str)
	{
		if (ispunct(*str))
			ct++;
		str++;
	}
	return ct;
}