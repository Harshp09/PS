#include <stdio.h>
void main()
{
    int a[60], n, i, m, c[50], k, p, d[50], w[68], sum = 0, s2 = 0, j;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("enter array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    m = (n / 2) - 1;
    for (i = 0; i <= m; i++)
        sum = sum + a[i];
    for (i = m + 1; i < n; i++)
        s2 = s2 + a[i];
    j = sum * s2;
    printf("%d", j);
}