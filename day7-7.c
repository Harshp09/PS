#include <stdio.h>
void main()
{
    void xcant(char[], char[]);
    char a[454], b[6446];
    printf("enter first string\n");
    gets(a);
    printf("enter 2nd string\n");
    gets(b);
    xcant(a, b);
}
void xcant(char a[], char b[])
{
    int len1 = 0, i = 0;
    while (a[i] != '\0')
    {
        len1++;
        i++;
    }
    i = 0;
    while (b[i] != '\0')
    {
        a[len1 + i] = b[i];
        i++;
    }
    a[len1 + i] = '\0';
    puts(a);
}