
#include<stdio.h>
int digitalRoot(int n);
int main()
{
    int n;
    printf("enter n:");
    scanf("%i",&n);
    printf("%i",digitalRoot(n));
}

int digitalRoot(int n)
{
    if(n<10)
        return n;
    n=n%10+digitalRoot(n/10);
    return n<10?n:digitalRoot(n);
}
