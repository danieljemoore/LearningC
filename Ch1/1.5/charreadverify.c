#include <stdio.h>
/* copy input to output; 2nd version */
int main()
{
	int c;

	while ((c = getchar()) != EOF){
		printf("getchar() != EOF: %d\n", c != EOF);
	}

	printf("getchar != EOF after EOF is encountered: %d\n", getchar() != EOF);

	return 0;
}