#include <stdio.h>

/* Replace tab, backspace, and backslash */
int main()
{
	int c, t, b, bs;

	t = 0;
	b = 0;
	bs = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			c = ("\\t");
		if (c == '\b')
			c = ("\\b");
		if (c == '\\')
			c = ("\\\\");
		putchar(c);
	}
}
