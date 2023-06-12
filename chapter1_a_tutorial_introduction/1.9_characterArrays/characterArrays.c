#include <stdio.h>
#define MAXLINE 1000

int getline_2(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len;  /* current line lenght */
    int max;  /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longes line saved here */

    max = 0;
    while ((len = getline_2(line, MAXLINE)) > 0)
        if (len > max) {
	    max = len;
	    copy(longest, line);
	}
    if (max > 0)    /* there was a line */
        printf("longest: %s\n", longest);
    return 0;
}

/* getline: read a line into a, return length */
int getline_2(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
	++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

