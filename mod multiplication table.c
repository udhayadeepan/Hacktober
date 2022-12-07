
#include<stdio.h>
void mod_Multiplication_Table(int n)
{
    for(int i=1;i<n;i++,printf("\n"))
        for(int j=1;j<n;j++)
            printf("%3i",(i*j)-((i*j)/n)*n);    
}

int main(){
    int n;
    printf("enter n value:");
    scanf("%i",&n);
    mod_Multiplication_Table(n);

}
