#include <stdio.h>
int main()
{
    int xcmp(char[], char[]);
    char a[50], b[80], f;
    printf("enter first string\n");
    gets(a);
    printf("enter 2nd string\n");
    gets(b);
    f = xcmp(a, b);
    if (f == 0)
    {
        printf("same");
    }
    else
        printf("not smae");
    return 0;
}
int xcmp(char a[], char b[])
{
    int c = 0, i = 0, l1 = 0, l2 = 0, flag = 0;
    while (a[i] != '\0')
    {
        i++;
        l1++;
    }
    while (b[c] != '\0')
    {
        c++;
        l2++;
    }
    i = 0;
    if (l1 == l2)
    {
        for (i = 0; i <= l1; i++)
        {
            if (a[i] != b[i])
            {
                flag = 1;
                break;
            }
            if (flag == 0)
                return 0;
        }
    }
    else
        return 1;
}
