#include <stdio.h>
#include <math.h>
void main()
{
    int n, i, sum = 1, f = 1, x, p = 1, t;
    printf("enter n\n");
    scanf("%d", &n);
    printf("enter x\n");
    scanf("%d", &x);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
        p = p * x;
        t = pow(-1, i);
        sum = sum + ((p * t) / f);
    }
    printf("%d", sum);
}