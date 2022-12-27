#include <stdio.h>
void main()
{
    int trlenx(char a[]);
    char a[46], *p, c = 0, f;
    printf("enter strings\n");
    gets(a);
    p = a;
    f = trlenx(a);
    printf("%d", f);
}
int trlenx(char a[])
{
    int i;
    i = 0;
    while (a[i] != '\0')
    {
        i++;
    }

    return i;
}