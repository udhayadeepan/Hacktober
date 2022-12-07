
#include<stdio.h>
int main()
{
    char name[50];
    int size;
    printf("enter your name in lower case:"); //input must be in lowercase to work properly
    scanf("%[^\n]%*c",&name);  //syntax for talking name with space.
    name[0]=(name[0]-32);  //to convert first char to upper case
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==' ') //when space is found
        {
             name[i+1]=(name[i+1]-32); //lower to uppercase the character after space
        }
    }
    printf("%s",name);
}
