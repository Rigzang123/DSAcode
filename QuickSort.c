#include <stdio.h>
void printarray(int arr[],int size);
int partition(int arr[],int low,int high);
void quicksort(int arr[],int low, int high);
void swap(int *a,int *b);

void main()
{
    int size;
   
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++)
    {
     
        printf("Enter arr[%d]=",i);
        scanf("%d",&arr[i]);

    }
    printf("\nthe unsorted array:");
    printarray(arr,size);
    quicksort(arr,0,size-1);

    printf("\n the sorted array (Quick sort):");
    printarray(arr,size);
}

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        printf("\nArr[%d]=%d",i,arr[i]);
    
}
void quicksort(int arr[],int low, int high)
{
    if(low < high)
    {
        int p = partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}
int partition(int arr[],int low,int high)
{
    int pivot = arr[high];
    int j = low - 1;
    int i;
    for(i=low;i<high;i++)
    {
        if(arr[i] <= pivot)
        {
            j++;
            swap(&arr[i],&arr[j]);
        }
        
    }
    swap(&arr[j+1],&arr[high]);
    
    return j+1;
    
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
