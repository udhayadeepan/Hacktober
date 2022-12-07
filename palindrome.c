
#include<stdio.h>
int main(){
    char str[30];
    scanf("%[^\n]c",str);
    int start=0,end;
    for(end=0;str[end+1]!=0;end++); //index of last char
    while(end>=start){
        if(str[start++]!=str[end--]){
            printf("false");
            return 0;    //whole program will end here
        }
    }
    printf("true");
    return 0;
}
