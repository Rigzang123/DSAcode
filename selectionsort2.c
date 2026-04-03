#include <stdio.h>
void printArray();
void selectionsort();
void swap();

void main()
{
    int size,i;
    printf("enter the size of array: ");
    scanf("%d", &size);
    int arr[size];

    for(i=0; i<size; i++)
    {
        printf("enter the element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nunsorted array :");
    printArray (arr, size);
    selectionsort(arr, size);

    printf("\nsorted array:");
    printArray(arr, size);
    

}// end of main

void printArray(int arr[], int size)
{
    int i;
    printf("\nthe element in array are: \n");
    for(i=0; i<size; i++)
        printf("\narr[%d]=%d", i, arr[i]);
}
void selectionsort(int arr[], int size)
{
    int swapcount=0;
    int min_index,i , j;
    for(i=0; i<size-1; i++)
    {
        min_index=i;
        for(j=i+1; j<size; j++)
        {
            if(arr[j]<arr[min_index])
            min_index=j;
        }
        if(i!=min_index)
        {
             swap(&arr[i], &arr[min_index]);
            swapcount++;
        }
        
       // swap(&arr[i], &arr[min_index]);
      // swapcount++;
    }
    printf("\nthe total number of swap= %d",swapcount);
}
void swap(int *a,int*b)
{
   int temp;
   temp =*a;
   *a=*b;
   *b=temp;

}