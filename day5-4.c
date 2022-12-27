#include <stdio.h>
void main()
{
    int a[40], s[200], i, k, n, sum = 0, c, p, q, w;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("enter array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter k\n");
    scanf("%d", &k);
    printf("number");
    for (i = 0; i < n; i++)
    {

        if (a[i] < k)
        {
            sum = 0;
            p = a[i];
            q = a[i];
            while (a[i] != 0)
            {
                c = a[i] % 10;
                sum = sum + c;
                a[i] = a[i] / 10;
            }
            if (sum == 1 || sum == -1)
                printf("%d", q);
        }
    }
}