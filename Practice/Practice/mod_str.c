#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);//ת����д
int PunctCount(const char *);//ͳ�Ʊ����Ÿ���

int main(void)
{
	char line[LIMIT];
	char *find;

	puts("please enter a line:");
	fgets(line, LIMIT, stdin);
	find = strchr(line, '\n');//���һ��з�
	if (find)//�����ַ����NULL
		*find = '\0';//�ÿ��ַ��滻
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