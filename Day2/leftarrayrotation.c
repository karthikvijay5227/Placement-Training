#include <stdio.h>
void main()
{
    int size;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    int r, temp;
    scanf("%d", &r);

    for (int k = 1; k <= r; k++)
    {
        temp = a[0];
        for (int i = 0; i < size-1; i++)
        {
            a[i] = a[i + 1];
        }
        a[size-1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}