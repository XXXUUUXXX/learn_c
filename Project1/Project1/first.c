#include <stdio.h>    /* stdio.h��c������������ı�׼���֣��ṩ�����������Ļ��� */
int main(void)        /* main()�Ǻ�������int����main()��������һ��������void����main()�����κβ��� */
{					  /* �����忪ʼ */
	int num;		  /* ����������num��int������������ */
	num = 1;		  /* ��ֵ1��ֵ��num */

	printf("I am a simple "); /* ����printf()���� */
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n", num);

	getchar();
	return 0;
}