#include <stdio.h>
void main()
{
    int mas(int[], int, int, int);
    void ma(int[], int, int);
    int arr[363], i, sum = 0, l, h, n, av, j, c;
    printf("enter n\n");
    scanf("%d", &n);
    printf("enter array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                c = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = c;
            }
        }
    }

    i = 0;
    l = 0;
    h = n - 1;
    av = mas(arr, sum, i, n);
    ma(arr, l, h);
    printf(" aavg=%d", av);
}

int mas(int arr[], int sum, int i, int n)
{
    if (i == n)
        return sum / n;
    else
        sum = sum + arr[i];
    i = i + 1;
    mas(arr, sum, i, n);
}
void ma(int arr[], int l, int h)
{
    int c = l + h;
    int m = c / 2;
    if (c % 2 == 0)
    {
        printf("%d\n%d", arr[m], arr[m + 1]);
    }
    else
        printf("%d", arr[m]);
}