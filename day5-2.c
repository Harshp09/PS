#include <stdio.h>
void main()
{
    int a[50], n, i, k, min, max;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("enter array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[0];
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    printf("no  of day=%d", max);
}