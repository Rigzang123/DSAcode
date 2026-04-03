#include <stdio.h>
#include <windows.h>
void slectionSort(int arr[], int arrsize);
void displayArray(int arr[], int arrsize);
void main()
{
    int arrsize;
    printf("\nEnter the size of Array:");
    scanf("%d", &arrsize);
   
    int arr[arrsize], i;
    for(int i = 0; i < arrsize; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: \n");
    displayArray(arr, arrsize);

   
    LARGE_INTEGER frequency;  // ticks per second
    LARGE_INTEGER start, end; // tick counts
    double elapsedTime;

    // Get frequency of the performance counter
    QueryPerformanceFrequency(&frequency);

    // Record start time
    QueryPerformanceCounter(&start);

    // Run sorting algorithm
    slectionSort(arr, arrsize);

    // Record end time
    QueryPerformanceCounter(&end);

    // Calculate elapsed time in seconds
    elapsedTime = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

    // Convert to microseconds
    double microseconds = elapsedTime * 1e6;

    printf("\nselection Sort took %.6f seconds (%.2f microseconds).\n", elapsedTime, microseconds);

    printf("Sorted array: \n");
    displayArray(arr, arrsize);



}//end of main

void slectionSort(int arr[], int arrsize)
{
    for(int i = 0; i < arrsize - 1; i++)
    {
        int min_index = i;
        for(int j = i + 1; j < arrsize; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
     int temp = arr[i];
     arr[i] = arr[min_index];
     arr[min_index] = temp;
    }

}//end of slectionSort

void displayArray(int arr[], int arrsize)
{
    for(int i = 0; i < arrsize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}//end of displayArray
