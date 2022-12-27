#include <stdio.h>
void main()
{
    int pro(int, int);
    int l, u, i, n = 2, p;
    printf("enter l and u");
    scanf("%d%d", &l, &u);
    for (i = l; i <= u; i++)
    {
        p = pro(i, n);
        if (p == i)
            printf("%d\n", p);
    }
}
int pro(int i, int n)
{
    if (n < i && i % n != 0)
    {
        return pro(i, n + 1);
    }
    if (n == i || i % n == 0)
        return n;
}