#include <stdio.h>
void printArray(int arr[], int size);
void mergeSort(int arr[],int L, int R);
void merge(int leftArray[],int Lsize, int rightArray[],int Rsize, int sortedArray[]);
void main()
{
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe unsorted array is: ");
    printArray(arr, size); //function call

    mergeSort(arr, 0, size - 1);

   
    printf("\nThe sorted array is: ");
    printArray(arr, size);

   


}// end of main

void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }    

}

void mergeSort(int arr[],int L, int R)
{
    int i;
    int j = 0;
    int size,mid;
    size = (R - L)+1;
    mid = size / 2;
    int leftArray[mid];
    int rightArray[size - mid];

    if(size <= 1)
        return;

    for(i = 0; i < size; i++)
    {
        if(i < mid)
        {
            leftArray[i] = arr[i];

        }

        else
        {
            rightArray[j] = arr[i];
            j++;

        }
    }

     printf("\nElements in the leftArray are: ");
     printArray(leftArray, mid);

     printf("\nElements in the rightArray are: ");
     printArray(rightArray, size - mid);

    mergeSort(leftArray,L,(mid - 1)+L );
    mergeSort(rightArray,mid + L, R);

    int Lsize = sizeof(leftArray)/sizeof (rightArray[0]);
    printf("\nThe size of the leftArray is %d", Lsize);

    int Rsize = sizeof(rightArray)/sizeof (leftArray[0]);
    printf("\nThe size of the rightArray is %d", Rsize);

     merge( leftArray,Lsize, rightArray, Rsize, arr);



}

void merge(int leftArray[],int Lsize, int rightArray[],int Rsize, int sortedArray[])
{

    int L,R,i;
    L=R=i=0;
    while(L < Lsize && R < Rsize)
    {
        if(leftArray[L] < rightArray[R])
        {
            sortedArray[i] = leftArray[L];
            L++;
            i++;
        }
        else
        {
            sortedArray[i] = rightArray[R];
            R++;
            i++;
        }
    }

    while(L < Lsize)
    {
        sortedArray[i] = leftArray[L];
        i++;
        L++;


    }

    while(R < Rsize)
    {                                                   
        sortedArray[i] = rightArray[R];
        i++;
        R++;
    }
}
