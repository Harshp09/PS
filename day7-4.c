#include <stdio.h>
void main()
{
    char a[46], *p, i = 0, c = 1;
    printf("enter string\n");
    gets(a);
    p = a;
    while (a[i] != '\0')
    {
        if (a[i] == ' ')
            c++;
        i++;
    }
    printf("%d", c);
}