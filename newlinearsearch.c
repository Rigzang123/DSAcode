#include <stdio.h>
#include <stdbool.h>
bool checkSorted(int arr[], int size);
int BinarySearch(int arr[], int size, int search_element);
void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++)
    {
        printf("Enter the element arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int search_element;
    printf("Enter the element to be searched: ");
    scanf("%d", &search_element);

    // bool check;
    // check = checkSorted(arr,size);
    // if (check == false)
    // printf("sort the array first");
    // else
    // printf("\nsorted");

    int index;
    index = BinarySearch(arr,size,search_element);
    if( index == -1)
    printf("\nThe element is not found",search_element);
    else
    printf("\nThe element %d is found in index %d",search_element,index);


} //end of main
bool checkSorted(int arr[], int size)
{
    bool check;
    check = true;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            check = false;
        }
    }
    return check;
}
int BinarySearch(int arr[], int size, int search_element)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search_element)
            return mid;
        if (search_element < arr[mid])
            high = mid - 1;
        else //if (search_element > arr[mid])
            low = mid + 1;
    }
    return -1;
    
}