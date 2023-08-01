#include<stdio.h>
void main()
{
    int size;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int l;
    scanf("%d", &l);
    int b[size];

    for(int i=0;i<size;i++)
    {
        b[i] = a[(i+size-l)%size];
        // b[(i+r)%size] = a[i];
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }
}