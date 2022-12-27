#include <stdio.h>
void main()

{
    int fact(int, int, int);
    int l, u, i, sum = 0, n = 1, avg;
    printf("enter l and u\n");
    scanf("%d%d", &l, &u);
    for (i = l; i <= u; i++)
    {
        avg = fact(i, sum, n);
        if (avg == i)
            printf("%d\n", avg);
    }
}
int fact(int i, int sum, int n)
{
    if (n == i)
        return sum;

    if (n < i)
    {
        if (i % n == 0)
        {

            return fact(i, sum + n, n + 1);
        }
        else

            return fact(i, sum, n + 1);
    }
}
