#include <stdio.h>
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		printf("the ASCII value fo %c is %d\n", ch, ch);

	return 0;
}