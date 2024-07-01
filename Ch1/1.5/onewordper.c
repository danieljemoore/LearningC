#include <stdio.h>

#define IN 1
#define OUT 0

/* print the input one word per line */
int main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c =='\t'){
			state = OUT;
			printf("\n");
		}
		else if (state == OUT)
			state = IN;
		if (state == IN)
			putchar(c);
	}
}
