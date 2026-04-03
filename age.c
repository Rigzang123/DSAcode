#include<stdio.h>
void main()
{
    int birthyear, year;
    printf("Enter the year of birth:");
    scanf("%d", &birthyear);

    printf("\nEnter a year:");
    scanf("%d", &year);

   int age;
   age = year - birthyear;


if(year<2026)
     printf("you were %d years old in %d", age,year);
else if(year>2026)
     printf("\nyou will be %d yaers old in %d",age,year);
else
        printf("\nyou are %d years old in %d", age,year);
}
