#include <stdio.h>

#include <stdio.h>
#include <math.h>
void main()
{
    int ar(int, int);
    int de(int, int, int);
    int l, u, i, p, sum = 0, d = 0, n = 0, q;
    printf("enter l and u");
    scanf("%d%d", &l, &u);
    for (i = l; i < u; i++)
    {
        p = ar(i, sum);
        q = de(i, sum, p);
        if (q == i)
            printf("%d\n", q);
    }
}
int ar(int i, int sum)
{
    if (i > 0)
    {
        i = i / 10;
        return ar(i, sum + 1);
    }
    if (i == 0)
        return sum;
}
int de(int i, int sum, int p)
{
    if (i > 0)
    {
        sum = sum + pow(i % 10, p);
        return de(i / 10, sum, p);
    }
    if (i == 0)
        return sum;
}
