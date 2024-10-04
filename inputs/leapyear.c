#include<stdio.h>
int main()
{
    int year;
    printf("Enter value of number");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Leapyear");
    }
    else
    {
        printf("Not leap year");
    }
    return 0;

}