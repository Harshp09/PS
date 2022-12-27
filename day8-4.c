#include <stdio.h>
void main()
{
    int n, a[45], i = 0, r, p, m, k = 0, sum1 = 0, sum2 = 0;
    printf("enter no\n");
    scanf("%d", &n);
    p = n;
    while (n != 0)
    {
        r = n % 10;
        a[k] = r;
        k++;
        n = n / 10;
    }

    m = k / 2;
    for (i = 0; i < m; i++)
    {
        sum1 = sum1 + a[i];
    }
    for (i = m + 1; i < k; i++)
    {
        sum2 = sum2 + a[i];
    }
    if (sum1 == sum2)
        printf("balanced no");
    else
        printf("not balance");
}
