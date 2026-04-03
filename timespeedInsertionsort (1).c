#include <stdio.h>
#include <windows.h>
void printArray();
void insertionSort();
void main()
{
    int size;
    printf("Enter the size of the arry: ");
    scanf("%d ", &size);

    int arr[size],i;
    for(i = 0; i < size; i++)
    {
        printf("Enter the elements of the %d:", i);
        scanf("%d ", &arr[i]);
    }

    printf("\nUnsorted arry:");
    printArray(size,arr);

    
    LARGE_INTEGER frequency;  // ticks per second
    LARGE_INTEGER start, end; // tick counts
    double elapsedTime;

    // Get frequency of the performance counter
    QueryPerformanceFrequency(&frequency);

    // Record start time
    QueryPerformanceCounter(&start);

    // Run sorting algorithm
    insertionSort(size, arr);

    // Record end time
    QueryPerformanceCounter(&end);

    // Calculate elapsed time in seconds
    elapsedTime = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

    // Convert to microseconds
    double microseconds = elapsedTime * 1e6;

    printf("\ninsertion Sort took %.6f seconds (%.2f microseconds).\n", elapsedTime, microseconds);

    printf("\nThe sorted array: ");
    printArray(size, arr);
}

void printArray(int size, int arr[])
{
    int i;
    for(i = 0; i < size; i++)
    printf("%d ", arr[i]);
}

void insertionSort(int size, int arr[])
{
     printf("\ninside insertionSort: "); 
     int i, key, j;
     for(i = 1; i < size; i++)
     {
        key = arr[i];
        j = i-1;

        while(key<arr[j] &&j>=0)
        {
            arr[j+1]=arr[j];
            j--;//compare with next one 
        }
        arr[j+1] = key;//to make i=0
     }
}
    
