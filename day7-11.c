#include <stdio.h>
#include <string.h>
void main()
{
    char a[56], i, b[56];
    int j = 0, t, c;
    printf("enter string\n");
    gets(a);
    t = strlen(a);
    i = 0;
    if (a[0] == ' ' && a[t - 1] == ' ')
    {
        c = t - 1;
        for (i = 0; i < c; i++)
        {
            a[i] = a[i + 1];
        }
        a[c - 1] = '\0';
        puts(a);
    }
    else if (a[0] != ' ' && a[t - 1] == ' ')
    {
        a[t - 1] = '\0';
        puts(a);
    }
    else if (a[0] == ' ' && a[t - 1] != ' ')
    {
        c = t - 1;
        for (i = 0; i < c; i++)
        {
            a[i] = a[i + 1];
        }
        a[i] = '\0';
        puts(a);
    }
    else
        puts(a);
}