#include <stdio.h>
void main()
{
    int n, i, sum = 0, f = 1;
    printf("enter n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
        sum = sum + (f / i);
    }
    printf("%d", sum);
}