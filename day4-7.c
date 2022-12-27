
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int fact(int);
    int n, sum = 0, i, s, t, q;
    printf("enter n\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        t = i;
        sum = 0;
        while (t != 0)
        {
            s = t % 10;
            q = fact(s);
            sum = sum + q;
            t = t / 10;
        }
        if (sum == i)
            printf("%d\n", i);
    }
}
int fact(int s)
{
    if (s == 1 || s == 0)
    {
        return 1;
    }
    else
        return s * fact(s - 1);
}
