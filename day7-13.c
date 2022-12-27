#include <stdio.h>
#include <string.h>
void main()
{
    char a[67][76], b[67][89], n, j;
    int i;
    printf("enter n\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        scanf("%s", a[i]);
    }
    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if ((strcmp(a[i], a[i + 1])) > 0)
            {
                strcpy(b[i], a[i + 1]);
                strcpy(a[i + 1], a[i]);
                strcpy(a[i], b[i]);
            }
        }
    }
    for (i = 0; i < n; i++)
        puts(a[i]);
}