//��ӡһ���ַ�������ͳ�ƴ�ӡ���ַ���
#include <stdio.h>
int put2(const char * string)
{
	int count = 0;
	while (*string)
	{
		putchar(*string++);
		count++;
	}
	putchar('\n');

	return(count);
}
put1("pizza");