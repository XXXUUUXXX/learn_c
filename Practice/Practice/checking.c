//������֤
#include <stdio.h>
#include <stdbool.h>
//��֤������һ������
long get_long(void);
//��֤��Χ���������Ƿ���Ч
bool bad_limits(long begin, long end, long low, long high);
//����a��b֮�������ƽ����
double sum_squares(long a, long b);
int main(void)
{
	const long MIN = -10000000L;//��Χ������
	const long MAX = +10000000L;//��Χ������
	long start;//�û�ָ���ķ�Χ��Сֵ
	long stop;//�û�ָ���ķ�Χ���ֵ
	double answer;

	printf("enter the limits (enter 0 for both limits to quit):\n");
	printf("lower limits: ");
	start = get_long();
	printf("upper limit: ");
	stop = get_long();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start, stop, MIN, MAX))
			printf("please try again.\n");
		else
		{
			answer = sum_squares(start, stop);
			printf("the sum of the squares of the integers ");
			printf("from %ld to %ld is %g\n", start, stop, answer);
		}
		printf("enter the limits (enter 0 for both limits to quit):\n");
		printf("lower limits: ");
		start = get_long();
		printf("upper limits: ");
		stop = get_long();
	}
	printf("Done!\n");
	return 0;
}

long get_long(void)
{
	long input;
	char ch;
	//������������
	while (scanf("%ld", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\nplease enter an ");
		printf("integer value,such as 2,-174,or3: ");
	}
	return input;
}

double sum_squares(long a, long b)
{
	double total = 0;
	long i;
	//��a��b֮������ƽ����
	for (i = a; i <= b; i++)
		total += (double)i*(double)i;
	return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
	bool not_good = false;

	if (begin > end)
	{
		printf("%ld isn't smaller than %ld.\n", begin, end);
		not_good = true;
	}
	if (begin < low || end < low)
	{
		printf("values must be %ld or greater.\n", low);
		not_good = true;
	}
	if (begin > high || end > high)
	{
		printf("values must be %ld or less.\n", high);
		not_good = true;
	}
	return not_good;
}
