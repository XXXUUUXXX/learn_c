//掷骰子模拟程序

//与mandydice.c一起编译

#include <stdio.h>
#include "diceroll.h"
#include <stdlib.h>//提供rand()原型

int roll_count = 0;//外部链接

static int rollem(int sides)//该函数属于该文件私有

{
	int roll;

	roll = rand() % sides + 1;
	++roll_count;//计算函数调用次数

	return roll;
}

int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;
	if (sides < 2)
	{
		printf("need at least 2 sides.\n");
		return -2;
	}
	if (dice < 1)
	{
		printf("need at least 1 dice.\n");
		return -1;
	}

	for (d = 0; d < dice; d++)
		total += rollem(sides);

	return total;
}