#include<stdio.h>
void main()
{
   int num1, num2,  num3;
   printf("Enter first number:");
   scanf("%d", &num1);
   printf("\nEnter  second number:");
    scanf("%d", &num2);



   num3=num1+num2;
   printf("Sum of two number is : %d",num3);
   num3=num1-num2;
   printf("\nDifference of two number is : %d",num3);
   num3=num1*num2;
   printf("\nproduct of two number is : %d",num3);
   
}

