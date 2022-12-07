
//language : C
#include<stdio.h>
 
int main()
{
    int N; //input
    scanf("%i",&N);
    printf("%i -> ",N); //print input
    if(N<0) //to work with -ve value.
    {
        N=N-2*N; //it converts negative to positive value .Eg:-127 -> 127 and then go process
    }
    if (N<10) //whether input is single digit
    {
        printf("%i",N);
    }
    else
    {
        int Last_digit=N%10; //to find the last digit
        while(N >=10)
        {
            N=N/10; //while end ,we get first digit of the given number;
        }
        printf("%i\n",Last_digit+N); //sum of last digit and N(first dight)
    }
}
