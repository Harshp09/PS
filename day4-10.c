#include <stdio.h>
void main()
{
    int pow1(int, int);
    int a, b, t;
    printf("enter a and b\n");
    scanf("%d%d", &a, &b);
    t = pow1(b, a);
    printf("%d", t);
}
int pow1(int b, int a)
{
    if (b == 1)
        return a;
    else
        return a * pow1(b - 1, a);
}