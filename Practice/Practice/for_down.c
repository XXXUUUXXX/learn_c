#include <stdio.h>
int main(void)
{
	int secs;

	for (secs = 5; secs > 0; secs--)
		printf("%d second!\n", secs);
	printf("we have ignition!\n");

	return 0;
}