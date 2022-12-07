
#include<stdio.h>
void addOneToEveything(int index,int arr[]); //declaration
int main()
{
    int size;
    printf("enter array size:");
    scanf("%i",&size);
    int arr[size];
    printf("enter values separated by space:");
    for(int i=0;i<size;i++)
        scanf("%i",&arr[i]);
    printf("arr -> ");
    addOneToEveything(size,arr);
    for(int i=0;i<size;i++)
        printf("%i ",arr[i]);
}

void addOneToEveything(int index,int arr[]) // defnition
{
    if(index<0)
        return;
    arr[index]=arr[index]+1;
    index--;
    addOneToEveything(index,arr);
}
