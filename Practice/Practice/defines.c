//使用limits.h和float头文件中定义的明示常量（符号常量）
#include <stdio.h>
#include <limits.h>//整型限制
#include <float.h>//浮点型限制
int main(void)
{
	printf("some number limits for this system:\n");
	printf("biggest int: %d\n", INT_MAX);
	printf("smallest long long: %lld\n", LLONG_MIN);
	printf("one byte = %d bits on this system.\n", CHAR_BIT);
	printf("largest double:%e\n", DBL_MAX);
	printf("smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);

	return 0;
}