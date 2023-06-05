#include <stdio.h>

/* copy input to output; 1st version */
int main()
{
    int c;
    printf("1st version, copy input char to output\n");
    c = getchar();
    while (c != EOF) {
        putchar(c);
	c = getchar();
    }
}
