//½»»»º¯Êý
#include <stdio.h>
void interchange(int *u, int *v);

int main(void)
{
	int x = 5, y = 10;

	printf("originally x = %d and y= %d.\n", x, y);
	interchange(&x, &y);
	printf("now x = %d and y = %d.\n", x, y);
	return 0;
}

void interchange(int *u, int *v)
{
	int temp;

	//printf("originally x = %d and y= %d.\n", u, v);
	temp = *u;
	*u = *v;
	*v = temp;
	//printf("now x = %d and y = %d.\n", u,v);
	//return u,v;
}