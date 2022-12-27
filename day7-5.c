#include <stdio.h>
void main()
{
    char a[45], i = 0;
    printf("enter string");
    gets(a);

    // while (a[i] != '\0')
    //{
    //   if (a[i] >= 65 && a[i] <= 90)
    // {
    //   a[i] = a[i] + 32;
    //}
    //
    // i++;
    //  }
    i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >=97 && a[i] <= 122)
        {
            a[i] = a[i] - 32;
        }

        i++;
    }

    puts(a);
}