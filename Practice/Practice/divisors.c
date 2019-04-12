//使用嵌套if语句显示一个数的约数
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num;
	unsigned long div;
	bool isPrime;

	printf("please enter an integer for analysis;enter q to quit\n");
	while (scanf("%lu", &num) == 1)
	{
		for (div = 2, isPrime = true; (div*div) <= num; div++)
		{
			if (num%div == 0)
			{
				if ((div*div) != num)
					printf("%lu is divisible by %lu and %lu.\n",
						num, div, num / div);
				else
					printf("%lu is divisible by %lu.\n",
						num, div);
				isPrime = false;//概数不是素数
			}
		}
		if (isPrime)
			printf("%lu is prime.\n",num);
		printf("please enter another integer for analysis; enter q to quit.\n");

	}
	printf("Bye.\n");

	return 0;

}