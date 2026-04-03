#include <stdio.h>
#include <stdbool.h>

bool checkSorted(int arr[], int size);
void  binarysearch(int arr[], int low, int high, int find_element);


void main() 
{
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++)
     {
        printf("Enter the  element of arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    bool pos = checkSorted(arr, size);

    if(pos) 
    {
        printf("The array is sorted .\n");

        int find_element;
        printf("Enter element to search: ");
        scanf("%d", &find_element);

        binarysearch(arr, 0, size - 1, find_element);
    }
    else {
        printf("The array is not sorted.\n");
    }
}

bool checkSorted(int arr[], int size) 
{
    for(int i = 0; i < size - 1; i++) 
    {
        if(arr[i] > arr[i + 1])
            return false; 
    }
    return true; 
}

 void  binarysearch(int arr[], int low, int high, int find_element)
{
    if(low > high)   
    {
        printf("Element %d not found in the array.\n", find_element);
        return;
    }

    int mid = (low + high) / 2;

    if(arr[mid] == find_element) 
    {
         printf("Element %d found at index %d.\n", find_element, mid);
        return;
    }
     else if(arr[mid] < find_element)
    {
        binarysearch(arr, mid + 1, high, find_element); 
    }
    else
    {
        binarysearch(arr, low, mid - 1, find_element); 
    }
}