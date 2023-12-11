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
	/*for(i=0;i<n;i++)
	{
		
	}*/
	
	int min=a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t=a[i];
		j=i-1;
		while(j>=0 && a[j]>t)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
		
		
	}
	printf("\n");
	print(a,n);
	
	
	
}