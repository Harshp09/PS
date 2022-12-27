#include <stdio.h>
void main()
{
    int i, l;
    char c[50] = "himanshu", *k;
    k = c;
    l = strlen(c);
    for (i = 0; i < l; i++)
    {
        printf("%s", k);
        *(k + i) = '*';
        printf("\n");
    }
}
