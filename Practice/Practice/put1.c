//打印字符串，不添加换行符\n
#include <stdio.h>
void put1(const char * string)
{
	while (*string != '\0')
		putchar(*string++);
}