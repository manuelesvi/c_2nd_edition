#include <stdio.h>

int power(int, int);

/* test power function */
int main()
{
    int i;

    for(i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

/* power: raise a base to n-th power; n >= 0; version 2 */
int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n) // changing value (n) doesn't have any effect on calling argument (i)
        p = p * base;
    return p;
}

