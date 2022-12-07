
#include<stdio.h>
int char_to_int(int *i,char input[]); //function declaration
int main()
{
    char input[30];
    int output=0;
    printf("enter sequence of integers separated by semicolon: ");
    scanf("%[^\n]",input);
    int size=0; //input size
    for( size=0;input[size]!=0;size++);  //to find size of input
    for(int i=0;i<size;i++)
    {
        output+=char_to_int(&i,input);
    }
    printf("%i",output);
}

int char_to_int(int *i,char input[]) //for char -> int conversion
{
    int num=0;
    int j;
    for (j= *i;input[j]!=';' && input[j]!=0;j++)
    {
        num=num*10+(input[j]-48);
    }
    *i=j;
    return num;
}
