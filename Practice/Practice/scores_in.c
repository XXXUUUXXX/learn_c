//ʹ��ѭ����������
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
		scanf("%d", &score[index]);//��ȡ10������
	printf("the scores read in are as follows:\n");
	for (index = 0; index < SIZE; index++)
		printf("%5d", score[index]);//��֤����
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index];//���ܷ�
	average = (float)sum / SIZE;//��ƽ����
	printf("sum of scores = %d, averager = %.2f\n", sum, average);
	printf("that's a hanicap of %.0f.\n", average - PAR);

	return 0;
}