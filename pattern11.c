#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = 10 - 2 * i; j >= 1; j--)
            printf(" ");
        for (j = i; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}