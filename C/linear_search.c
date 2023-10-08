#include<stdio.h>
#include<stdlib.h>
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
	int search =search_element(arr,search_for,n);
	if(search==1)
	{
		printf("\nFound");
	}
	else
	{
		printf("\nNot Found");
	}
	
	
}
int search_element(int arr[],int search_for,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		
		if(arr[i]==search_for)
		{
			return (1);
		}
		
	}
	return(0);
}