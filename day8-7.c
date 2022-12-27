#include <stdio.h>
void main()
{
    int n, k, j, i;
    printf("enter n\n");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        printf("%d", n);
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                for (j = 2; j <= i - 1; j++)
                {
                    if (i % j == 0)
                        break;
                }
                if (i == j)
                    printf("%d\n", i);
            }
        }
    }
}