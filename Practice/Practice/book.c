#include <stdio.h>
#include <string.h>
char *s_gets(char *st, int n);
#define MAXTITL 41//��������󳤶�+1
#define MAXAUTL 31//�������ֵ���󳤶�+1

struct book { //�ṹģ�壺�����book
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};  //�ṹģ�����

int main(void)
{
	struct book library;//��library����Ϊһ��book���͵ı���

	printf("please enter the book title.\n");
	s_gets(library.title, MAXTITL);//����titile����
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
		find = strchr(st, '\n');//���һ��з�
		if (find)//�����ַ����NULL
			*find = '\0';//�ڴ˴���һ�����ַ�
		else
			while (getchar() != '\n')
				continue;//������������ʣ����ַ�

	}
	return ret_val;
}