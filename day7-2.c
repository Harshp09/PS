#include <stdio.h>
#include <string.h>
void main()
{
    void xstrrev(char[]);
    char a[45], f;
    printf("enter string\n");
    gets(a);
    xstrrev(a);
}
void xstrrev(char a[])
{
    char b[34];
    int i = 0, c, k = 0, m, t, l;

    //  for (i = 0; i < m; i++)
    //{
    //  t = a[i];
    // a[i] = a[l - 1 - i];
    // a[l - 1 - i] = a[i];
    //}
    for (i = strlen(a) - 1; i >= 0; i--)
    {
        b[k] = a[i];

        k++;
    }

    b[k] = '\0';
    puts(b);
}