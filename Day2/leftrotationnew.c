#include<stdio.h>
void main()
{
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int r;
    scanf("%d",&r);
    int temp;

    int b[size];

    for(int i=0;i<size;i++)
    {
        b[i] = a[(i+r)%size];
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }
}