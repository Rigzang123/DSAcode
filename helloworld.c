#include <stdio.h>
void main()
{
    float temp;
    printf("Enter the temperature in degrees: ");
    scanf("%f", &temp);


     float far;
     far=(temp*1.8)+32;
     printf("\nThe farenheit equivalent is %.2f",far);
}