#include <stdio.h>

/* count characters in input; 2nd version */
int main()
{
    double nc;

    printf("Press CTRL+D on Unix or CTRL+Z on Windows to finish counting characters... \n");

    for (nc = 0; getchar() != EOF; nc++) 
    	; // null statement
    
    printf("Total number of characters: %.0f\n", nc);
}

