#include <stdio.h>

/* count lines in input */
int main()
{
    int c, nl;
    nl = 0;

    printf("Press CTRL+D on Unix or CTRL+Z on Windows to finish counting lines...\n");

    while ((c = getchar()) != EOF)
        if (c == '\n')	
            ++nl;
	    
    printf("Total number of characters: %d\n", nl);
}

