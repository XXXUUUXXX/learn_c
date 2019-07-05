//与diceroll.c一起编译

#include <stdio.h>
#include <stdlib.h>//为srand()提供原型
#include "diceroll.h"//为roll_n_dice()提供原型，为roll_count声明变量
#include <time.h>//为time()提供原型

int main(void)
{
	int dice, roll;
	int sides;
	int status;

	srand((unsigned int)time(0));//随机种子
	printf("enter the number of sides per die, 0 to stop\n");
	while (scanf("%d", &sides) == 1 && sides > 0)
	{
		printf("how many dice?\n");
		if ((status = scanf("%d", &dice)) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				printf("you should have entered an integer.");
				printf(" let's begin again.\n");
				while (getchar() != '\n')
					continue;
				printf("how many sides? enter 0 to stop.\n");
				continue;
			}
		}
		roll = roll_n_dice(dice, sides);
		printf("you have rolled a %d using %d %d-sided dice.\n",
			roll,dice,sides);
		printf("how many dices? enter 0 to stop.\n");
	}
	printf("the rollem() function was called %d times.\n",
		roll_count);
	printf("good fortune to you!\n");

	return 0;

}
