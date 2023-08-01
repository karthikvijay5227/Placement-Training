#include<stdio.h>
void reverses(char [],int,int);
void main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf(" ");
    for(int i=0;i<n;i++)
        scanf("%c",&a[i]);
    reverses(a,0,n-1);
    for(int i=0;i<n;i++)
        printf("%c",a[i]);
    printf("\n");
}

void reverses(char a[],int l,int r)
{
    if(l<r)
    {
        char temp = a[l];
        a[l] = a[r];
        a[r] = temp; 
        reverses(a,l+1,r-1);
    }
}