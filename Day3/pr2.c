#include<stdio.h>
void main()
{
	char a[100];
	int count[52] = {0};
	scanf("%[^\n]s",a);
	for(int i=0;a[i];i++)
	{
		if(a[i]>='A' && a[i]<='Z')
			count[a[i]-65]++;
		else
			count[a[i]-97+26]++;
			
	}
	for(int i=0;i<52;i++)
	{
		if(count[i]>1)
			printf("%c - %d\n",(i<26?i+65:i+97-26),count[i]);
	}
}
