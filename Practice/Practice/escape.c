//ʹ��ת��������ʾ
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\aEnter your desired monthly salary:"); //1
	printf(" $_____\b\b\b\b\b");//\b�˸��
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);//\t�Ʊ��
	printf("\rGEE!\n");//\r�س�

	return 0;

}