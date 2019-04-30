#include <stdio.h>
#define MSG "i am a symbolic string constant."
#define MAXLENGTH 81
int main(void)
{
	char words[MAXLENGTH] = "I am a string in an array.";
	const char * pt1 = "Something is pointing at me.";
	puts("Here ar some strings:");
	puts(MSG);
	puts(words);
	puts(pt1);
	words[8] = 'p';
	puts(words);

	return 0;
}