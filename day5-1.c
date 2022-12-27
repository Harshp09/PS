#include <stdio.h>
void main()
{
    int a[50], n, i, k, p;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("enter array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    k = 0;
    p = n - 1;
    while (a[k] != a[p])
    {
        if (a[k] > a[p])
        {
            k++;
        }
        else
        {
            p--;
        }
    }
    printf("%d", a[k]);
}