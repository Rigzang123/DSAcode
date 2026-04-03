#include<stdio.h>
void main()
{
  int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int i;

    for(i=0; i<size; i++)
    {
        printf("Enter the elements %d:",i);
        scanf("%d", &arr[i]);
    }
    
}
void printArray(int arr[], int size)
{
   for( int i=0;i<size;i++)  
   {
    printf("\narr[%d]=%d",i,arr[i]);
   }
}
void mergeSort(int arr[],int l,int r)
{
  int i;
  int size = (r-l)+1;
  if (size == 1)
    return;
  

  int mid =(size/2)+l;
  int leftArray[mid];
  int rightArray[size-mid];
 
   if(i < mid)
   {
      for(i=0;i<size;i++);
   }
}
