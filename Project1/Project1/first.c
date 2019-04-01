#include <stdio.h>    /* stdio.h是c编译器软件包的标准部分，提供键盘输入和屏幕输出 */
int main(void)        /* main()是函数名，int表明main()函数返回一个整数，void表明main()不带任何参数 */
{					  /* 函数体开始 */
	int num;		  /* 声明变量，num是int（整数）类型 */
	num = 1;		  /* 把值1赋值给num */

	printf("I am a simple "); /* 调用printf()函数 */
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n", num);

	getchar();
	return 0;
}