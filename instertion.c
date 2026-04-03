#include <stdio.h>
void printarray();
void insertionsort(int size,int arr[]);

void main()
{
    int size, elements;
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size], i;

    for(i = 0; i < size; i++)
    {
        printf("Enter elements %d:", i);
        scanf("%d", &arr[i]); 
    }

    printf("the unsorted array:");
    printarray(size,arr);
    insertionsort(size,arr);
    printf("\nthe stored array:");
    printarray(size,arr);

}

void printarray(int size, int arr[])
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insertionsort(int size,int arr[])
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