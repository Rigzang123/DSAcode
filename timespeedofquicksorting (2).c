#include <stdio.h>
#include <windows.h>
void swap();
void printArray();
int partition();
void quickSort();
void main()
{
    int size;
    printf("Enter the size of element: ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size;i++)
    {
        printf("Enter the elements %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted array is:");
    printArray(arr, size );

    //call quicksortfunctions to sort the array

    LARGE_INTEGER frequency;  // ticks per second
    LARGE_INTEGER start, end; // tick counts
    double elapsedTime;

    // Get frequency of the performance counter
    QueryPerformanceFrequency(&frequency);

    // Record start time
    QueryPerformanceCounter(&start);

    // Run sorting algorithm
    quickSort(arr, 0, size-1);

    // Record end time
    QueryPerformanceCounter(&end);

    // Calculate elapsed time in seconds
    elapsedTime = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

    // Convert to microseconds
    double microseconds = elapsedTime * 1e6;

    printf("\nQuick Sort took %.6f seconds (%.2f microseconds).\n", elapsedTime, microseconds);

    printf("\nThe sorted array is: ");
    printArray(arr, size );



}//end of main

void printArray(int arr[], int size )
{
   for(int i = 0; i < size; i++)
    printf(" %d ", arr[i]);
}//end of printarray

void quickSort(int arr[],int low, int high)//calculate the partition and 
{
  if(low < high)
  {
    int p = partition(arr, low, high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);

  }

}

int partition(int arr[], int low, int high)//for further splitting into right and left
{
    int pivot = arr[high];
    int j = low - 1;
    for(int i = low; i < high; i++)//not to start always from 0
    {
        if(arr[i]<=pivot)
        {
            j++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[j+1], &arr[high]);//at the end of array

     return j+1;

  
} 

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
