//output:
//enter string:abcde
//a ab abc abcd abcde

#include<stdio.h>
int main()
{
    char string[30];
    printf("enter string:");
    scanf("%[^\n]c",string);
    int len;
    for(len=0;string[len]!=0;len++);  //find length of input
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",string[j]);
        }
        printf(" ");
    }

}
