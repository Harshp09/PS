#include <stdio.h>
void main()
{
    int fibb(int);
    int n, t;
    printf("enter n\n");
    scanf("%d", &n);
    t = fibb(n);
    printf("%d", t);
}
int fibb(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibb(n - 1) + fibb(n - 2);
}