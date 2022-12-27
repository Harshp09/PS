#include <stdio.h>
void main()
{
    int a[20], v[30], i, n, k, c;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("enter array");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("revrese");

    k = n - 1;
    i = 0;
    while (i < n)
    {
        v[i] = a[k];
        k--;
        i++;
    }
    for (i = 0; i < n; i++)
        a[i] = v[i];
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}