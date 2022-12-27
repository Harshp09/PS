#include <stdio.h>
void main()
{
    int seq(int, int);
    int n, c;
    printf("enter n\n");
    scanf("%d", &n);
    c = n;
    seq(n, c);
}
int seq(int n, int c)
{
    if (n >= 0)
    {
        printf("%d", n);
        seq(n - 5, c);
    }
    else if (n <= 0)
    {
        printf("%d", n);
        seq(n + 5, c);
    }
}
