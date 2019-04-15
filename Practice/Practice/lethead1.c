#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck plaza"
#define PLACE "megapolis, ca 94904"
#define WIDTH 40

void starbar(void);//函数原型要加分号

int main(void)
{
	starbar();//函数调用
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar();//函数调用

	return 0;
}
void starbar(void) //函数定义
{
	int count;

	for (count = 1; count <= WIDTH; count++)
		putchar('*');
	putchar('\n');
}