//����һ����ĸ����ӡ������ĸ��ͷ�Ķ�����
//switch���
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;

	printf("give me a letter of the alphabet, and i will give");
	printf("an animal name\nbeginning with that letter.\n");
	printf("please type in a letter;type # to end my act.\n");
	while ((ch = getchar()) != '#')
	{
		if ('\n' == ch)
			continue;
		if (islower(ch)) //ֻ����Сд��ĸ
			switch (ch)
			{
			case 'a':
				printf("argali,a wild sheep of asia\n");
				break;
			case 'b':
				printf("babirusa,a wild pig of malay\n");
				break;
			default:
				printf("that's a stumper\n");
			}
		else
			printf("i recognize only lowercase letters.\n");
		while (getchar() != '\n')
			continue;
		printf("please type another letter or a #.\n");
	}
	printf("bye\n");
	return 0;
}