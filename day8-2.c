#include <stdio.h>
#include <math.h>
void main()
{

    int a, b, c, f, k, t = 0, r;
    printf("enter a and b\n");
    scanf("%d%d", &a, &b);
    printf("enter k\n");
    scanf("%d", &k);
    c = pow(a, b);
    while (k > 0 && c > 0)
    {
        r = c % 10;
        c = c / 10;
        k--;
    }
    if (k > 0 && c == 0)
    {
        printf("not exits");
    }
    else
        printf(" k digit = %d", r);
}
