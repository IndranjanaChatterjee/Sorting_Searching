
 
 
def pivot(a, l, r):
    i=l
    j=r
    temp=0
    while(i<j):
        while(a[i]<a[l]):
            i+=1
        while(a[j]>a[l]):
            j-=1
        if(l<r):
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
    temp=a[l]
    a[l]=a[j]
    a[j]=temp
    return j
  
 

 
 
def quicksort(arr, l, r):
    if l < r:
 
        p=pivot(arr,l,r)
        
 
        # Sort first and second halves
        quicksort(arr, l, p-1)
        quicksort(arr, p+1, r)
        
 
 
# Driver code to test above
arr = [12, 11, 13, 5, 6, 7]
n = len(arr)
print("Given array is")
for i in range(n):
    print("%d" % arr[i],end=" ")
 
quicksort(arr, 0, n-1)
print("\n\nSorted array is")
for i in range(n):
    print("%d" % arr[i],end=" ")
 