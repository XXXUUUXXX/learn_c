//统计字符数、单词数、行数
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>//为isspace()函数提供原型
#define STOP '|'
int main(void)
{
	char c;//读入字符
	char prev;//读入的前一个字符
	long n_chars = 0L;//字符数
	int n_lines = 1;//行数
	int n_words = 0;//单词数
	int p_lines = 0;//不完整的行数
	bool inword = false;//如果c在单词中，inword等于true

	printf("enter text to be analyzed (| to terminate):\n");
	prev = '\n';//用于识别完整的行
	while ((c = getchar()) != STOP)
	{
		n_chars++;//统计字符
		if (c == '\n')
			n_lines++;//统计行数
		if (!isspace(c) && !inword)//不是空格也不是c
		{
			inword = true;//开始第一个单词
			n_words++;//统计单词数
		}
		if (isspace(c) && inword)
			inword = false;//达到单词末尾
		prev = c;//保存字符
	}
	if (prev != '\n')
		p_lines = 1;

	printf("characters = %ld,words = %d,lines = %d, ", n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);

	return 0;

}