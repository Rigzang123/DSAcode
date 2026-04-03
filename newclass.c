#include<stdio.h>
void arry_display();
void selection_sort();
void main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
     int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the elemnt of the array %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The Unsorted Array: ");
    arry_display(arr,size);
    selection_sort(arr,size);
    printf("\nThe Sorted Array: ");
    arry_display(arr,size);
}

void arry_display(int arr[],int size)
{
    for ( int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

void selection_sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
       int min_index=i;
        for(int j=i+1; j<size;j++)                           
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
}
