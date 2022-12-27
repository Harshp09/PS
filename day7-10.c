#include <stdio.h>
#include <string.h>
void main()
{
    char a[56], i, j, s;
    int c;
    printf("enter string\n");

    gets(a);
    s = strlen(a);
    for (i = 'a'; i <= 'z'; i++)
    {
        c = 0;
        for (j = 0; j < s; j++)
        {
            if (i == a[j])
                c++;
        }
        if (c > 0)
            printf("%c is %d times\n", i, c);
    }
}