//enter word with odd no.of letters : abcdefg
//output:aaaabbbccdeefffgggg
#include<stdio.h>
void print(int index,int limit); //func to print char with respective times.
char input[30];
int main()
{
    printf("enter word with odd no.of letters : ");
    scanf("%[^\n]c",input);
    int len,mid;
    for(len=0;input[len]!=0;len++);
    mid=len/2;
    for(int i=0;i<=mid;i++)      //first half of input
    {
        print(i,(mid+1-i));  //arguments->index and no.of times to print
    }
    for(int i=mid+1;i<=len;i++)   //second half of input
    {
        print(i,-(mid-1-i));
    }
}

void print(int index,int limit)
{
    for(int i=0;i<limit;i++)
    {
        printf("%c",input[index]);
    }
}
