#include <stdio.h>
void bubblesort();
void main()
{
    int arrsize;
    printf("enter the size of the arry:");
    scanf("%d", &arrsize);

  int arr[arrsize];   
    for (int i = 0; i < arrsize; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, arrsize);
    printf("\nThe sorted array: ");

   
} //end of the main
void bubblesort(int arr[], int arrsize)
{
    int i, j, temp;
    for( i=0; i<arrsize; i++)
    {
        for(j=0; j<arrsize-i; j++)
        {
             temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    

}