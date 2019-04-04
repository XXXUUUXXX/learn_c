//使用转义序列演示
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\aEnter your desired monthly salary:"); //1
	printf(" $_____\b\b\b\b\b");//\b退格符
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);//\t制表符
	printf("\rGEE!\n");//\r回车

	return 0;

}