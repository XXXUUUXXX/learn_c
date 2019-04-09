//根据用户键入的整数求和
#include <stdio.h>
int main(void) {
	long num;
	long sum = 0L;//sum初始化为0

	int status;

	printf("please enter an integer to summed ");
	printf("(q to quit): ");
	status = scanf("%ld", &num);
	while (status == 1)
	{
		sum = sum + num;
		printf("please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
	}
	printf("Those intergers sum to %1d.\n", sum);

	return 0;

}