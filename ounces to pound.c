
#include<stdio.h>
int main()
{
    int ounces,pounds;
    printf("enter weight in ounces:");
    scanf("%i",&ounces);
    pounds=ounces/16; 
    ounces=ounces-pounds*16;
    if (pounds>0)
        printf("%i pounds ",pounds);
    if(ounces>0)
        printf("%i ounces",ounces);
    return 0;
}
