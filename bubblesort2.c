#include <stdio.h>

void bubblesort(int arr[], int arrsize);

int main()
{
    int arr[5] = {-2, 45, 0, 11, -9};
    bubblesort(arr, 5);
    
}

void bubblesort(int arr[], int arrsize)
{
    int i, j, temp;

    
    for(i = 0; i < arrsize; i++)
        printf(" %d ", arr[i]);

    
    for(i = 0; i < arrsize - 1; i++)
    {
        for(j = 0; j < arrsize - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nSorted array:\n");

    for(i = 0; i < arrsize; i++)
        printf(" %d ", arr[i]);
}