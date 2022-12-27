#include <stdio.h>
#include <math.h>
void main()
{

    int n, i, sum = 0;

    printf("enter n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        sum = sum + i * (i + 1) * (i + 2);
    }
    printf("%d", sum);
}
