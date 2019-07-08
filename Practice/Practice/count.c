//使用标准io
#include <stdio.h>
#include <stdlib.h>//exit()原型

int main(int argc, char *argv[])
{
	int ch;
	FILE *fp;//文件指针
	unsigned long count = 0;
	if (argc != 2)
	{
		printf("usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("file %s has %lu characters\n", argv[1], count);

	return 0;
}
