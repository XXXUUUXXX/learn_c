//ʹ���ⲿ����
#include <stdio.h>
int units = 0;//�ⲿ����
void critic(void);
int main(void)
{
	extern int units;//��ѡ���ظ�˵��

	printf("how many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic();
	printf("you must have looked it up!\n");
	return 0;
}
void critic(void)
{
	//ɾ���˿�ѡ���ظ�˵��
	printf("no luck, my friend.try again.\n");
	scanf("%d", &units);
}