//һ������Ҵ���Ĳ����ֳ���
#include <stdio.h>
int main(void) {
	int guess = 1;

	printf("pick an integer from 1 to 100.i will try to guess ");
	printf("it.\nrespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("...is your number %d?\n",guess);

	/*
	while (getchar() != 'y')
	{
		printf("well,then ,is it %d?\n",++guess);
	}
	*/
	/*
	while (getchar() != 'y')
	{
		printf("well,then,is it %d?\n", ++guess);
		while (getchar() != '\n')
			continue;//����лس���������ʣ���������
	}
	*/
	
	char response;
	while ((response = getchar()) != 'y')
	{
		if (response == 'n')
			printf("well,then,is it %d?\n", ++guess);
		else
			printf("sorry,i understand only y or n.\n");
		while (getchar() != '\n')
			continue;
	}
	printf("i knew i could do it\n");

	return 0;
}