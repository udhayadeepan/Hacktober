
#include<stdio.h>
int main()
{
    int n;
    printf("enter n value:");
    scanf("%i",&n);
    char arr[n][n];
    for(int i=0;i<n;i++) //creating the array
        for(int j=0;j<n;j++){
            if(i==0 || j==n-1 || i==n-1 || j==0 || i+j==n-1 || i==j)
                arr[i][j]='#';
            else
                arr[i][j]=' ';}

    for(int i=0;i<n;i++) //printing
    {
        for(int j=0;j<n;j++)
            printf("%c ",arr[i][j]);
        printf("\n");
    }
}
