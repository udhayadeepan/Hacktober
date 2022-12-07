
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%i",&year);
    if((year%4==0) && (year %400==0) || (year%100!=0))
        printf("true");
    else
        printf("false");
}
