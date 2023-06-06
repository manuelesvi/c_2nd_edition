#include <stdio.h>

/* count characters in input; 1st version */
int main()
{
    int nc = 0;

    printf("Press CTRL+D on Unix or CTRL+Z on Windows to finish counting characters...");

    while (getchar() != EOF) {
        ++nc;
    }

    printf("Total number of characters: %d\n", nc);
}

