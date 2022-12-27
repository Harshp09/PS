#include <stdio.h>
#include <math.h>
void main()
{
    float fact(float);
    int pow(int, int);
    float n, i, f = 1, x = 1, p = 1, t, q = 2, sum = 0;
    int s=-1

    printf("enter n\n");
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
    {

        f = fact(x);
        t = pow(s, i + 1);

        sum = sum + ((i * t) / f);
        x = x + 2;
    }
    printf("%f", sum);
}
float fact(float x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}
int pow(int s, int i)
{
    if (i % 2 == 0)
        return 1;
    else
        return -1;
}