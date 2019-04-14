#include <stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
	int ch;//待打印字符
	int rows, cols;//行数，列数
	printf("enter a character and two integers:\n");
	
	/*
	while ((ch = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		display(ch, rows, cols);
		printf("enter another character and two integers;\n");
		printf("enter a newline to quit\n");
	}
	*/
	while ((ch = getchar()) != '\n')
	{
		if (scanf("%d %d", &rows, &cols) != 2)
			break;
		display(ch, rows, cols);
		while (getchar() != '\n')
			continue;
		printf("enter another character and two integers;\n");
		printf("enter a newline to quit\n");
	}
	printf("bye\n");
	return 0;
}
void display(char cr, int lines, int width)
{
	int row, col;

	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
			putchar(cr);
		putchar('\n');//结束一行开始新一行
	}
}
