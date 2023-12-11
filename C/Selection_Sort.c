#include<stdio.h>
void print(int a[],int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
}
int main()
{
	int n,t;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements:");
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	print(a,n);
	int min=a[0];
	for(i=0;i<(n-1);i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
		
		
	}
	printf("\n");
	print(a,n);
	
	
	
}
