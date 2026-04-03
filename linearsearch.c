#include<stdio.h>
void printarray(int arr[],int size);
int linearSearch(int arr[],int findelement,int size);
void main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];

    for(int i=0; i<size; i++)
    {
        printf("\nEnter the array[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("the elements in the array :");
    printarray(arr,size);
     int findelement;
     printf("\nEnter the element to be search:");
     scanf("%d",&findelement);
     int pos;
     pos = linearSearch( arr, findelement, size);
     if(pos==-1)
     printf("\nelement %d is not found", findelement);
    else
    printf("\nelement %d is found in index %d",findelement,pos);
}

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    
        printf("\narr[%d]=%d",i,arr[i]);
    
}
int linearSearch(int arr[],int findelement,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==findelement)
        
           return i; 
    }
    return -1;
}