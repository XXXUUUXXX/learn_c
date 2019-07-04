//包含rand1()和srand1()文件
static unsigned long int next = 1;//seed

int rand1(void) {
	//生成伪随机数魔术公式
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;

}

void srand1(unsigned int seed)
{
	next = seed;
}