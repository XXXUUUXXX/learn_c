//�����ַ�ʽ��ʾfloat���͵�ֵ
#include <stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%.2f can be wretten %e\n", aboat, aboat);
	//��һ��Ҫ�������֧��C99�����е��������
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
	printf("%.1f can be wretten %.2e\n", abet, abet);
	printf("%Lf can be wretten %Le\n", dip, dip);

	return 0;
}