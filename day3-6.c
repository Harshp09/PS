
#include <stdio.h>
#include <math.h>
void main()
{
    float fact(float);
    float n, i, f = 1, x, p = 1, t = 1, q = 2;
    float sum = 1;
    printf("enter n\n");
    scanf("%f", &n);
    printf("enter x\n");
    scanf("%f", &x);
    for (i = 2; i <= 2 * n; i += 2)
    {

        f = fact(i);
        p = pow(x, i);
        t = t * (-1);
        sum = sum + ((p * t) / f);
    }
    printf("%f", sum);
}
float fact(float i)
{
    if (i == 0)
        return 1;
    else
        return i * fact(i - 1);
}