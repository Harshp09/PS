#include <stdio.h>
void main()
{
    int i, j, n;
    printf("enter n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1)
                printf("*");
            else if (i + j == n + 1)
                printf("*");
            else if (i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}