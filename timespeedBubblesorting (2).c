#include <stdio.h>
#include <windows.h>
void bubbleSort();
void printArray();
void main()
        {
            int arrsize, i;
            printf("Enter the size of the array: ");
            scanf("%d", &arrsize);
            
            int arr[arrsize];
            //enter the elements in array
            for(i = 0; i < arrsize; i++)
            {
                printf("Enter the element %d: ", i);
                scanf("%d", &arr[i]);
            }

             printf("\n The unsorted array: ");
             printArray(arr, arrsize);
        
            
       

        
    LARGE_INTEGER frequency;  // ticks per second
    LARGE_INTEGER start, end; // tick counts
    double elapsedTime;

    // Get frequency of the performance counter
    QueryPerformanceFrequency(&frequency);

    // Record start time
    QueryPerformanceCounter(&start);

    // Run sorting algorithm
    bubbleSort(arr, arrsize); //function call

    // Record end time
    QueryPerformanceCounter(&end);

    // Calculate elapsed time in seconds
    elapsedTime = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

    // Convert to microseconds
    double microseconds = elapsedTime * 1e6;

    printf("\nBubble Sort took %.6f seconds (%.2f microseconds).\n", elapsedTime, microseconds);
        

        printf("\n The sorted array: ");
        printArray(arr, arrsize);
    
        }//end of the main

void printArray(int arr[],int arrsize)
    {
      
        for(int i=0; i<arrsize; i++)
        printf("%d ", arr[i]);

    }

    //bubblesort function 
void bubbleSort(int arr[], int arrsize)
    {
        int i,j;
    for (i = 0; i < arrsize; i++)
    {
        for(j = 0; j<arrsize - i; j++)
        { 
            if(!(arr[j] < arr[j+1]) )
            {
                int temp = arr[i];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        printf("\nThe element: %d", j++);
        for(int k = 0; k < arrsize; k++)
        {
            printf(" %d ", arr[k]);
        }
    }
    }//end of bubbleSort6
    