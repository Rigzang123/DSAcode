#include<stdio.h>
void printArray();
void main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size],i;
    for(int i =0; i < size; i++)
    {
        printf("Enter the element %d:",i);
        scanf("%d", &arr[i]);
    }       

    printf("the unsorted array:");
    printArray(size,arr);
}


void printArray(int size, int arr[])
{
    int i;
    for(i=0; i<size;i++)
    {
        printf("%d ",arr[i]);

    }
}
void insertionSort(int size, int arr)
{
    int i,key,j;
    printf("\ninside insertionsort");
    for ( int  i = 0; i < size; i++)
    {
        key = arr[i];
        j = i-1;
        while(key<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}