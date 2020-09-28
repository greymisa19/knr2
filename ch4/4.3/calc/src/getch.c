#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

/* get a potentially pushed back character */
int getch(void) {
	return (bufp > 0) ? buf[--bufp] : getchar();
}

/* psuh a character back on input */
void ungetch(int c) {
	if (bufp == BUFSIZE)
		printf("ungetch: too many characters!\n");
	else
		buf[bufp++] = c;
}
