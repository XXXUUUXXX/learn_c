//�������룬�ո񲻱�
#include <stdio.h>
#define SPACE ' '//space��ʾ������-�ո�-������
int main(void) {
	char ch;

	ch = getchar();//��ȡһ���ַ�
	while (ch != '\n')//��һ��δ����ʱ
	{
		if (ch == SPACE)//���¿ո�
			putchar(ch);//�ַ�����
		else
			putchar(ch + 1);//�ı������ַ�
		ch = getchar();//��ȡ��һ���ַ�

	}
	putchar(ch);//��ӡ���з�

	return 0;
}