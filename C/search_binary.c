#include<stdio.h>
#include<stdlib.h>
int check(int arr[],int get,int size)
{
	int first=0,last=size-1;
	int mid;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(arr[mid]>get)
		{
			last=mid-1;
		}
		else if(arr[mid]<get)
		{
			first=mid+1;
		}
		else if(arr[mid]==get)
		{
			return(1); 
		}
	}
	return(0);
}
int main()
{
	int n,i,search_for;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the element to be searched:");
	scanf("%d",&search_for);
	printf("\nEnter the elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	int search = check(arr,search_for,n);
	if(search==1)
	{
		printf("\nFound");
	}
	else
	{
		printf("\nNot Found");
	}
	
	
}
