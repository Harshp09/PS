#include <stdio.h>
void main()
{
    int i, j, x = 5;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 7 - i; j++)
            printf("%d", j);
        for (j = 3; j <= 2 * i - 1; j++)
            printf(" ");
        if (i > 1)
        {
            printf("%d", x);
            x--;
        }
        for (j = 6 - i; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}