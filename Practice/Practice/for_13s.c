#include <stdio.h>
int main(void)
{
	int n;//��2 ��ʼÿ�ε���13

	for (n = 2; n < 60; n = n + 13)
		printf("%d \n",n);

	return 0;
}