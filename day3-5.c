#include <stdio.h>
#include <math.h>
void main()
{
    int fact(int);
    int n, i, sum = 0, f = 1, x, p = 1, t = -1;
    printf("enter n\n");
    scanf("%d", &n);
    printf("enter x\n");
    scanf("%d", &x);
    for (i = 1; i <= 2 * n; i += 2)
    {
        f = fact(i);
        p = pow(x, i);
        t = t * (-1);
        sum = sum + ((p * t) / f);
    }
    printf("%d", sum);
}
int fact(int i)
{
    if (i == 0)
        return 1;
    else
        return i * fact(i - 1);
}