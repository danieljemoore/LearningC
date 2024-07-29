#include <stdio.h>

#define MAXLINE 1000

int getlin(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	char line[MAXLINE];
	char fixed[MAXLINE];

	while ((len = getlin(line, MAXLINE)) > 0)
		if (len > 1){
			copy(fixed, line);
		}
	printf("%d %s \n", len, fixed);
	return 0;
}

int getlin(char s[],int lim)
{
	int c, i, b;
	
	b = 0;
	for (i=0; i < lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i) {
		if ((c == '\t' || c == ' ') && b != 2) {
			s[i] = c;
			++b;
		}
		if (b ==2){
			s[i] = '\0';
			break;
		}
		else {	
			s[i] = c;
			b = 0;
		}
	}
	return i;
}

void copy(char to[], char from [])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);

int main()
{
    char line[MAXLINE];
    int len;

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > 1) {
            while (line[len - 1] == ' ' || line[len - 1] == '\t') {
                len--;
            }
            line[len] = '\0';
        }
        if (len > 0) {
            printf("%s\n", line);
        }
    }

    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

