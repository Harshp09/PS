#include <stdio.h>
void main()
{
    int a[20], i, n, c;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("enter array");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("alternate");
    for (i = 0; i < n; i++)
    {
        c = a[i + 1];
        a[i + 1] = a[i];
        a[i] = c;
        i = i + 1;
    }
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}