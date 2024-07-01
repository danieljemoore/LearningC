#include <stdio.h>

/* Remove spaces when there is more than 1 */
int main()
{
	int c, b;

	b = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++b;
		if (c != ' ')
		{
		b = 0;
		}
		if (b < 2)
				putchar(c);
	}
}
