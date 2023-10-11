#include<stdio.h>
void print(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
int index(int arr[],int low,int high)
{
	int i=low,j=high,temp;

	do
	{
		while(arr[i]<arr[low])
		{
			i++;
		}
		while(arr[j]>arr[low])
		{
			j--;
		}
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		
	}while(i<j);
	temp=arr[low];
	arr[low]=arr[j];
    arr[j]=temp;
    
    return j;
    
	
}
void quicksort(int arr[],int low,int high)
{
	int point;
	
	if(low<high)
	{
		point=index(arr,low,high);
		quicksort(arr,low,(point-1));
		quicksort(arr,(point+1),high);
	}
}
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
	print(arr,n);
	quicksort(arr,0,(n-1));
	printf("Sorted Array:");
	print(arr,n);
}