#include <stdio.h>
void main()
{
    int pal(int, int);
    int n, sum = 0;
    scanf("%d", &n);
    sum = pal(n, sum);
    if (sum == n)
        printf("pallindrome");
    else
        printf("not");
}
int pal(int n, int sum)
{
    if (n == 0)
        return sum;
    else
    {
        sum = sum * 10 + n % 10;
        return pal(n / 10, sum);
    }
}
