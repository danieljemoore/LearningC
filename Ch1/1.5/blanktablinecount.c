#include <stdio.h>

/* count blanks, tabs, & lines */
int main()
{
	int c, b, t, nl;

	nl = 0;
	b = 0;
	t = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		if(c == ' ')
			++b;
		if(c == '\t')
			++t;
	}
	printf("Line:%d\nTab:%d\nBlank:%d\n", nl, t, b);
}
