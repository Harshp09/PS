#include <stdio.h>
#include <string.h>
void main()
{
    char a[50], b[90], j = 0;
    int i, flag = 0;
    printf("enter string\n");
    gets(a);
    for (i = strlen(a) - 1; i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }
    b[j] = '\0';
    for (i = 0; i <= strlen(a); i++)
    {
        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("pallindrome");
    else
        printf("not ");
}