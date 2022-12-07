
//Language :C
#include<stdio.h>
int reverse(int N);
int main()
{
    int N; //input interger
    scanf("%i",&N);   //taking input
    int output; //to store the reversed number
    if(N<0)  //if input is negative
    {
        output=-(reverse(-1*N)); //it convert the -ve input to +ve ,again reversed num to -ve.
    }
    else
    {
        output=reverse(N); // if input is positive number
    }
    printf("%i -> %i",N,output);
}

int reverse(int N)   //this fn will return the reversed number
{
     int rev=0;
     while(N>0)
    {
        int temp=N%10;
        rev=rev*10+temp;
        N=N/10;
    }
    return rev;
}
