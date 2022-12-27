#include <stdio.h>
void main()
{
    int fact(int);
    int n, f;
    printf("enter n");
    scanf("%d", &n);
    f = fact(n);
    printf("%d", f);
}
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fact(n - 1);
}