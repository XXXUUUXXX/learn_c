#include <stdio.h>
#define LEN 20
const char *msgs[5] = {
	"    thank you for the wonderful evening, ",
	"you certainly prove that a ",
	"is a special kind of guy. we must get together",
	" and have a few laughs"
};

struct names {
	char first[LEN];
	char last[LEN];
};

struct guy {
	struct names handle;//嵌套结构
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main(void)
{
	struct guy fellow = {//初始化一个结构变量
		{"ewen","villard"},
		"grilled salmon",
		"personality coach",
		65882.00
	};

	printf("dear %s, \n\n", fellow.handle.first);
	printf("%s%s.\n", msgs[0], fellow.handle.first);
	printf("%s%s\n", msgs[1], fellow.job);
	printf("%s\n", msgs[2]);
	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
	if (fellow.income > 150000.0)
		puts("!!!");
	else if (fellow.income > 75000.0)
		puts("!!");
	else
		puts("...");
	printf("\n%40s%s", " ", "see you soon");
	printf("\n%40s%s\n", " ", "shalala");

	return 0;
}