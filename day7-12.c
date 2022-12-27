#include <stdio.h>
#include <string.h>
void main()
{
    char a[56], i;
    int c = 1, t, p = 0;
    printf("enter string\n");
    gets(a);
    if ((a[0] >= 65 && a[0] <= 90) || (a[0] >= 97 && a[0] <= 122) || a[0] == '_')
    {
        for (i = 1; i < strlen(a); i++)
        {
            if ((a[i] >= 48 && a[i] <= 57) || (a[i] >= 65 && a[0] <= 90) || (a[i] >= 97 && a[i] <= 122) || a[i] == '_')
            {
                c = c + 1;
            }
            else
            {
                printf("not a valid character\n");
                p = 1;
                break;
            }
        }
        if (c == strlen(a))
            printf("valid");
    }
    else
    {
        printf("not a valid");
    }
}