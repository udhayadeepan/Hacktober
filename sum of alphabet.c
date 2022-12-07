// dave-->32(4+1+22+5)

#include<stdio.h>
int main()
{
   char name[30];
   int output=0;
   printf("enter name:");
   scanf("%[^\n]c",name);
   int len;
   for(len=0;name[len]!=0;len++); //find len of input
   int values[len];
   for(int i=0;i<len;i++)
   {
       values[i]=name[i]-96;
       output+=(name[i]-96);
   }
   printf("%i(",output);
   for(int i=0;i<len;i++)   //to print output like in example format
   {
       printf("%i",values[i]);
       if(i<len-1)
          printf("+");
   }
   printf(")");
}
