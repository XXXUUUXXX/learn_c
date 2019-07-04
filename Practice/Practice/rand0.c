//生成随机数
static unsigned long int next = 1;//种子

unsigned int rand0(void)
{
	//生成伪随机数的魔术公式
	next = next * 110351245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}