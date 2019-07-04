//测试rand1()和srand1()
#include <stdio.h>
#include <stdlib.h>
extern void srand1(unsigned int x);
extern int rand1(void);

int main(void)
{
	int count;
	unsigned seed;

	printf("please enter your choice for seed.\n");
	while (scanf("%u", &seed) == 1)
	{
		srand1(seed);//重置种子
		for (count = 0; count < 5; count++)
			printf("%d\n", rand1());
		printf("please enter next seed (q to quit):\n");
	}
	printf("done\n");

	return 0;
}