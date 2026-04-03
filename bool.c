#include<stdio.h>
#include<stdbool.h>
bool linearSearch(int arr[],int size,int find_element);
void main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);


    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("\nEnter the arr[%d]:",i);
        scanf("%d",&arr[i]);
    }

    int find_element;
    printf("Enter the element to be searched:");
    scanf("%d",&find_element);

    bool pos;
    pos = linearSearch(arr,size,find_element);
    if(pos == false)
        printf("\nElement is not found");

}
bool linearSearch(int arr[],int size,int find_element)
{
    int i;
    bool found = false;
    for(i=0;i<size;i++)
    {
        if(arr[i] == find_element)
        {
            printf("\nThe element %d is found in index %d",find_element,i);
            found = true;
        }
    }
    return found;
}

