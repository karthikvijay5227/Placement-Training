#include<stdio.h>
void main()
{
	char a[100];
	scanf("%s",a);
	scanf("%[^\n]s",a); //scans until \n
	scanf("%[^a-z]s",a);//until specified range of characters
	scanf("%[^A-Z]s",a);// ""
	scanf("%[A-Z]s",a);//scns only uppercase
	scanf("%[A-Z,0-9]s",a);//only uppercase and numbers
	gets(a); 
	scanf("%[A-z,a-z,0-9, ,.,\n]s",a); //scans alphabets,numbers and other
	fgets(a,14,stdin);  // fgets(array_name,char_limit+1,stdin)
	
	printf("%s",a);
	
	
	char a[1000];
	scanf("%[^\n]s",a);
	
	for(int i=0;a[i];i++)
		printf("%c",a[i]);
	
	
}
