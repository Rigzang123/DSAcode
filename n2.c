#include<stdio.h>
void func(int arr[]);
void main()
{
    int arr[]={5,6,2,1};

    func(arr);
    
   
}
void func(int arr[])
{
    int size=sizeof(arr)/4;
    
      printf("the size of the array is %d",size);
}