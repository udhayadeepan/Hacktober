   
//Language : C
#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%i %i %i",&A,&B,&C);
    if((A>=B && A<=C) || (A<=B && A>=B))
        printf("%i",A);
    else if((B>=C && B<=A ) || (B<=C && B>=A))
        printf("%i",B);
    else 
        printf("%i",C);
}
