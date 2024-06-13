#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* create horizontal histogram for words */
int main()

{
	int c, count, state;

	state = OUT;
	count = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			printf("\n");
		}
		else if (state == OUT) {
			printf("%d:", count);
			state = IN;
			++count;
		}
		if (state == IN) 
			printf("#");
	} 
}
