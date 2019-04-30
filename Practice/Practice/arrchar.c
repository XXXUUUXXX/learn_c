//指针数组，字符串数组
#include <stdio.h>
#define SLEN 40
#define LIM 5
int main(void)
{
	const char * mytalents[LIM] = {
		"adding numbers swiftly",
		"multiplying accurately","stashing data",
		"following instructions to the letter",
		"understanding the c language"
	};
	char yourtalents[LIM][SLEN] = {
		"walking in a straight line",
		"sleeping","watching television",
		"mailing letters","reading email"
	};
	int i;

	puts("let's compare talents.");
	printf("%-36s  %-25s\n", "my talents", "your talents");
	for (i = 0; i < LIM; i++)
		printf("%-36s  %-25s\n", mytalents[i], yourtalents[i]);
	printf("\nsizeof mytalents: %zd,sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));

	return 0;
}