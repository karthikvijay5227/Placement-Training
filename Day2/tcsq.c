#include<stdio.h>
#include<stdlib.h>
int compare(const void* num1, const void* num2) // comparing function  
{  
    int a = *(int*) num1;  
    int b = *(int*) num2;  
    if(a < b)  
    {  
        return 1;  
    }  
    else if(a > b)  
    {  
        return -1;  
    }  
    return 0;  
} 
void main()
{
	int size;
	scanf("%d",&size);
	int A[size];
	for(int i=0;i<size;i++)
		scanf("%d",&A[i]);
	int max;
	scanf("%d",&max);
	qsort(A, size, sizeof(int), compare);  
	int sum = 0;
	int csum = 0;
	for(int i=0;i<size;i++)
	{
		sum+=A[i];
		csum++;
		if(sum>=max)
			break;
	}
	printf("%d",csum);
}
	
	
