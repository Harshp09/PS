#include <stdio.h>
void main()
{
    int sum1(int);
    int n, c = 0, sum = 0, t, p;
    printf("enter n\n");
    scanf("%d", &n);

    p = sum1(n);
    printf("%d", p);
}
int sum1(int t)
{
    int c = 0, p, d, sum = 0;
    p = t;

    if (p < 10)
        return p;
    else
    {
        while (p != 0)
        {
            d = p % 10;
            sum = sum + d;
            p = p / 10;
        }
        return sum1(sum);
    }
}
