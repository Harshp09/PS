#include <stdio.h>
#include <math.h>
void main()
{
    int n, i, sum = 1, f = 1, x;
    printf("enter n\n");
    scanf("%d", &n);
    printf("enter x\n");
    scanf("%d", &x);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
        sum = sum + (pow(x, i) / f);
    }
    printf("%d", sum);
}