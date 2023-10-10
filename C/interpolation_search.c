#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the matrix:");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("Enter the elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int search;
	printf("Enter the element to search for:");
	scanf("%d",&search);
	int get=find(arr,n,search);
	if(get==1)
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
}
int find(int arr[],int len,int num)
{
	int lo=0,up=len-1;
	int pos;
	while(lo<=up)
	{
		pos=lo+(double)(((up-lo)*(num-arr[lo]))/(arr[up]-arr[lo]));
		if(arr[pos]==num)
		{
			return (1);
		}
		else if(arr[pos]<num)
		{
			lo=pos+1;
		}
		else if(arr[pos]>num)
		{
			up=pos-1;
		}
		
	}
	return (0);
}