#include<stdio.h>
void print(int a[],int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,high,mid);
	}
}

void merge(int a[],int low,int high,int mid)
{
	int i,j,k;
	i=low;
	k=low;
	j=mid+1;
	int b[100];
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			k++;
			i++;
			
		}
		if(a[i]>a[j])
		{
			b[k]=a[j];
			k++;
			j++;
			
		}
	}
	while(i<=mid)
	{
		    b[k]=a[i];
			k++;
			i++;
		
	}
	while(j<=high)
	{
		    b[k]=a[j];
			k++;
			j++;
		
	}
	for(i=low;i<=high;i++)
	{
		a[i]=b[i];
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
	mergesort(a,0,n-1);
	
	printf("\nAfter sorting\n");
	print(a,n);
	
	
	
}
