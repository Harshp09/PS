#include <stdio.h>
void main()
{
    int gcd(int, int);
    int a, b, t;
    printf("enter a and b\n");
    scanf("%d%d", &a, &b);
    t = gcd(a, b);
    printf("%d", t);
}
int gcd(int a, int b)
{
    if (a < b)
        return gcd(a, b - a);
    if (a > b)
        return gcd(a - b, b);
    if (a = b)
        return b;
}