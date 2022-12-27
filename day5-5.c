#include <stdio.h>
void main()
{
    int c[89], i, n, l, k = 0;
    printf("enter\n");
    scanf("%d", &n);
    i = 1;
    k = 0;
    l = n - 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            c[k] = i;
            k++;
        }
        else
        {
            c[l] = i;
            l--;
        }

        i++;
    }

    printf("array\n");
    for (i = 0; i < n; i++)
        printf("%d\n", c[i]);
}