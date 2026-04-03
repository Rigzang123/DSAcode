#include <stdio.h>
#include <windows.h>
void printArray();
void mergeSort();
void merge();
void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int i;
    for(i=0;i<size;i++)
    {
    printf("Enter the elements %d: ", i);
    scanf("%d", &arr[i]);
    }

    printf("\nThe unsorted array is: ");
    printArray(arr, size);

    
    LARGE_INTEGER frequency;  // ticks per second
    LARGE_INTEGER start, end; // tick counts
    double elapsedTime;

    // Get frequency of the performance counter
    QueryPerformanceFrequency(&frequency);

    // Record start time
    QueryPerformanceCounter(&start);

    // Run sorting algorithm
    mergeSort(arr, 0, size-1 );

    // Record end time
    QueryPerformanceCounter(&end);

    // Calculate elapsed time in seconds
    elapsedTime = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

    // Convert to microseconds
    double microseconds = elapsedTime * 1e6;

    printf("\nmerge Sort took %.6f seconds (%.2f microseconds).\n", elapsedTime, microseconds);
    printf("\nThe sorted array is: ");
    printArray(arr, size);
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    printf(" %d ", arr[i]);

    
}

void mergeSort(int arr[], int left, int right)//split the array into half l=left,r=right
{
    int size, mid, i, j = 0;
    size = (right-left)+1;
    mid = size/2;

    int leftArr[mid];
    int rightArr[size-mid];
    if(size<=1)
    return;
    for(i = 0; i < size; i++)
    {
        
        if(i < mid)
            leftArr[i]=arr[i];
        else
        {
           rightArr[j]=arr[i]; 
           j++;
        }
    }
 printf("\nThe elements in the left array is:");
 printArray(leftArr, mid); 

 printf("\nThe elements in the right array is:");
 printArray(rightArr, size-mid);

 mergeSort(leftArr, left,(mid-1)+left);
 mergeSort(rightArr, (mid+left), right);

 int size_leftArr= sizeof(leftArr)/sizeof(leftArr[0]);
 int size_rightArr= sizeof(rightArr)/sizeof(rightArr[0]); 
 printf("\nThe size of the left array is %d",size_leftArr);
 printf("\nThe size of the right array is %d",size_rightArr);

merge(leftArr, size_leftArr, rightArr, size_rightArr, arr);
 

}

void merge(int leftArr[], int size_leftArr, int rightArr[],int size_rightArr , int sortedArr[])
{
    int l = 0, i = 0, r = 0;
    
    while (l < size_leftArr && r < size_rightArr)
    {
    
        if(leftArr[l] < rightArr[r])
            {
                sortedArr[i]=leftArr[l];//move the elements
                i++;
                l++;

            }
         else
             {
                 sortedArr[i]=rightArr[r];
                 i++;
                 r++;
             }
    
    
    }
    while (l < size_leftArr)
    {
        sortedArr[i]=leftArr[l];//move the elements
                i++;
                l++;
    }
    while (r < size_rightArr)
    {
        sortedArr[i]=rightArr[r];//move the elements
                i++;
                r++;
    }
}