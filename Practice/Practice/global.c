//使用外部变量
#include <stdio.h>
int units = 0;//外部变量
void critic(void);
int main(void)
{
	extern int units;//可选的重复说明

	printf("how many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic();
	printf("you must have looked it up!\n");
	return 0;
}
void critic(void)
{
	//删除了可选的重复说明
	printf("no luck, my friend.try again.\n");
	scanf("%d", &units);
}