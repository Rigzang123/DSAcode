#include <stdio.h>
void bubblesort();
void main()
{
    int  arrsize;
    printf("Enter the size of the array: ");
    scanf("%d", &arrsize);

    int arr[arrsize];
    
    for (int i = 0; i < arrsize; i++)
     {
        printf("Enter element %d: ", i );
        scanf("%d", &arr[i]);
    }
    bubblesort( arr, arrsize);
    printf("The sorted array is: ");
    for(int i = 0; i < arrsize; i++)
    {
        printf("%d ", arr[i]);
    }
    

}//End of main

void bubblesort(int arr[], int arrsize)
{
    int i, temp;
    for(i=0; i<arrsize; i++)
    {
        for(int j=0; j < arrsize -i -1; j++)
        {
            if(!(arr[j] < arr[j+1]))
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
  


}//End of bubblesort                  