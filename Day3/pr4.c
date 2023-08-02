#include<stdio.h>
#include<ctype.h>
void main()
{
	char a[100];
	scanf("%[^\n]s",a);
	int start = 0,end = 0;
	int p = 0;
	for(int i=0;a[i];i++)
	{
		if(a[i] == ' ')
		{
		  p++;
		  if(p%2==0)
		  {
		  	for(int k=end-1;k>=start;k--){
		  		if(a[k]>=65 && a[k]<=90)
					printf("%c",a[k]+32);
				else
					printf("%c",a[k]);
			}
		  }
		  else{
			for(int k=end-1;k>=start;k--){
		  		if(a[k]>=97 && a[k]<=122)
					printf("%c",a[k]-32);
				else
					printf("%c",a[k]);
			}
		  }
		  printf("\n");
		  start = i+1;
		  end++;
		}
		else
		{
			if(a[i+1] == '\0')
				a[i+1] = ' ';
			end++;
		}
	}
}
