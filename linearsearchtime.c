#include <stdio.h>
#include <windows.h>
void printArray(int arr[],int size);
int linearSearch(int arr[],int size, int find_element);
void main()
{
    int size = 200;
    int arr[200] = {
1, 45, 23, 67, 89, 12, 34, 78, 90, 11,
56, 32, 76, 21, 88, 14, 39, 72, 60, 5,
99, 41, 27, 63, 18, 50, 73, 29, 84, 36,
7, 91, 48, 66, 20, 58, 3, 95, 70, 16,
82, 24, 61, 9, 37, 74, 52, 13, 86, 44,
15, 62, 28, 79, 92, 31, 47, 68, 83, 6,
54, 19, 40, 75, 98, 22, 57, 80, 10, 35,
64, 87, 26, 53, 71, 8, 42, 69, 94, 17,
59, 30, 46, 81, 4, 38, 65, 93, 25, 55,
77, 2, 43, 85, 33, 97, 49, 58, 12, 67,
73, 29, 91, 16, 62, 44, 83, 21, 39, 70,
5, 98, 31, 52, 76, 14, 60, 88, 27, 45,
3, 69, 84, 22, 57, 90, 11, 41, 74, 36,
68, 19, 95, 7, 50, 80, 24, 61, 33, 72,
10, 54, 87, 28, 63, 47, 92, 15, 78, 34,
66, 9, 53, 71, 20, 85, 37, 64, 96, 2,
58, 73, 18, 49, 82, 26, 55, 91, 6, 40,
75, 13, 68, 97, 32, 59, 23, 84, 46, 12,
70, 35, 94, 17, 51, 79, 4, 88, 29, 62,
43, 8, 77, 30, 65, 99, 21, 56, 38, 67
};

    printf("\nThe elements in the array are:");
    printArray(arr,size);
  
    int find_element;
    linearSearch(arr,size,find_element);

    printf("\nEnter the elements to be searched: ");
    scanf("%d", &find_element);

    LARGE_INTEGER frequency;  // ticks per second
    LARGE_INTEGER start, end; // tick counts
    double elapsedTime;

    // Get frequency of the performance counter
    QueryPerformanceFrequency(&frequency);

    // Record start time
    QueryPerformanceCounter(&start);


    int pos = linearSearch(arr, size, find_element);
     // Run sorting algorithm
    linearSearch(arr, size,find_element); //function call

    // Record end time
    QueryPerformanceCounter(&end);

    // Calculate elapsed time in seconds
    elapsedTime = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

    // Convert to microseconds
    double microseconds = elapsedTime * 1e6;

    printf("\nlinearSearch took %.6f seconds (%.2f microseconds).\n", elapsedTime, microseconds);
        
    if (pos == 1)
    printf("\nThe element %d is found", find_element);
    else
    printf("\nThe element %d is not found", find_element,pos);

} //end of main
void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++)
        printf("\narr[%d] = %d", i,arr[i]);
}
int linearSearch(int arr[],int size, int find_element)
{
    for(int i=0; i<size; i++)
    {
        if (arr[i] == find_element)
        {
            return i;
        }
        return -1;
    }
}