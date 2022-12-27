#include <stdio.h>
void main()
{
    int n, i, j, k;
    printf("enter n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            printf("least prime factor of %d=1\n", i);
        else if (i % 2 == 0)
            printf("least prime factor of %d=2\n", i);
        else
        {
            for (k = 2; k <= i - 1; k++)
            {
                if (i % k == 0)
                {
                    for (j = 2; j <= k - 1; j++)
                    {
                        if (k % j == 0)
                            break;
                    }
                    if (k == j)
                        printf("least factor of %d=%d\n", i, k);
                }
            }
        }
    }
}
