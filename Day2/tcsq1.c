#include<stdio.h>
#include<limits.h>
void main()
{
	int size;
	scanf("%d",&size);
	int a[size];
	for(int i=0;i<size;i++)
		scanf("%d",&a[i]);
	int tar;
	scanf("%d",&tar);
	int sum=0,l=0,ans=INT_MAX;
	for(int i=0;i<size;i++)
	{
	        l=0;
	        sum=0;
		for(int j=i;j<size;j++)
		{
			sum += a[j];
			l++;
			if(sum>=tar && (ans>=l)){
			    ans = l;
			    break;
			}
		}
	}
	printf("%d\n",ans);
}
