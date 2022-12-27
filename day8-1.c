#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, d, x, y, i;
    printf("enter a,b,c\n");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        printf("real roots are %d,%d", x, y);
    }
    else if (d == 0)
    {
        x = -b / (2 * a);
        printf("enter equal roots are %d,%d", x, x);
    }
    else if (d < 0)
    {
        d = -1 * d;
        x = (-b + i * sqrt(d)) / (2 * a);
        y = (-b - i * sqrt(d)) / (2 * a);
        printf("imaginary roots are%d%d", x, y);
    }
    else
        printf("not equation");
}