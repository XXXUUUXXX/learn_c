//使用循环处理数组
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;

	printf("Enter %d golf scores:\n", SIZE);
	for (index = 0; index < SIZE; index++)
		scanf("%d", &score[index]);//读取10个分数
	printf("the scores read in are as follows:\n");
	for (index = 0; index < SIZE; index++)
		printf("%5d", score[index]);//验证输入
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index];//求总分
	average = (float)sum / SIZE;//求平均分
	printf("sum of scores = %d, averager = %.2f\n", sum, average);
	printf("that's a hanicap of %.0f.\n", average - PAR);

	return 0;
}