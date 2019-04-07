//跳过输入中的前两个整数
#include <stdio.h>
int main(void)
{
	int n;

	printf("please enter theree integers:\n");
	scanf("%*d %*d %d", &n);
	printf("the last integer was %d\n", n);

	return 0;
}