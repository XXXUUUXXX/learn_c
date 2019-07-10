#include <stdio.h>
#include <string.h>
char *s_gets(char *st, int n);
#define MAXTITL 41//书名的最大长度+1
#define MAXAUTL 31//作者名字的最大长度+1

struct book { //结构模板：标记是book
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};  //结构模板结束

int main(void)
{
	struct book library;//把library声明为一个book类型的变量

	printf("please enter the book title.\n");
	s_gets(library.title, MAXTITL);//访问titile部分
	printf("now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("done.\n");

	return 0;
}

char *s_gets(char *st, int n)
{
	char * ret_val;
	char *find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');//查找换行符
		if (find)//如果地址不是NULL
			*find = '\0';//在此处放一个空字符
		else
			while (getchar() != '\n')
				continue;//处理输入行中剩余的字符

	}
	return ret_val;
}