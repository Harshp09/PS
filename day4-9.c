#include <stdio.h>
void main()
{
    int lcm(int, int, int);
    int a, b, c, d = 1;
    printf("enter a and b\n");
    scanf("%d%d", &a, &b);
    c = lcm(a, b, d);
    printf("%d", c);
}
int lcm(int a, int b, int d)
{

    if (d % a == 0 && d % b == 0)
        return d;
    else
    {
        d++;
        return lcm(a, b, d);
    }
}