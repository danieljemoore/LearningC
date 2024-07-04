#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* create horizontal histogram for words */
int main()
{
	int c, i, x, count, state, wcount, max;
    int nword[500] = {0};

	state = OUT;
	wcount = 0;
    max = 0;
	while ((c = getchar()) != EOF) { 
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			/*printf("\n");*/
		}
		else if (state == OUT) {
			/*printf("%d:", count);*/
			state = IN;
			++wcount;
		}
		if (state == IN) {
			/*printf("#");*/
            ++nword[wcount - 1];
        }
    }
    for (i = 0; i < wcount; ++i) {
        printf("%d ", i);
    }
    printf("\n");
    for (i=0; i < wcount; ++i) {
        if (nword[i] > max) {
            max = nword[i];
        }
    }
    for (i=0; i < max; ++i) {
        for (x = 0; x < wcount; ++x){
            if (nword[x] >= (max - i)){
                printf("# ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
