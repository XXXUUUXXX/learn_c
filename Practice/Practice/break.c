//breakÍË³öÑ­»·
#include <stdio.h>
int main(void)
{
	float length, width;

	printf("enter the lengthof the reactangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("length = %0.2f:\n", length);
		printf("enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("width = %0.2f:\n", width);
		printf("area = %0.2f:\n", length*width);
		printf("enter the length of the rectangle");
	}
	printf("Done.\n");
	return 0;
}