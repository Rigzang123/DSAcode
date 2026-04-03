#include <stdio.h>
void main()
{
    int year;
    printf("What is your year of birth?");
    scanf("%d" ,&year);

    printf("so you are born in %d" , year);



    int age, currentyear;
    currentyear=2026;
    age=currentyear-year;

    printf("\nyou are %d years old this year", age);

}
