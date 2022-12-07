
#include<stdio.h>
void Alphabet_Rangoli_up(int n); //up half + center lines of pattern
void Alphabet_Rangoli_down(int n); //down
int main()
{
    int n;
    printf("enter n value:");
    scanf("%i",&n);
    if(n<=26){
    Alphabet_Rangoli_up(n);
    Alphabet_Rangoli_down(n);}
}

void Alphabet_Rangoli_up(int n)
{
    for(int i=1;i<=n*2;i=i+2){
        int num=n;
        for(int j=n+(n-2)-i;j>=0;j--) //front hyphens
            printf("-");
        for(int j=1;j<=i;j++){
            printf("%c",num+96);
            (j>i/2)?num++:num--; //decide whether inc or dec
            if(j<i)  //hyphens in between letters
                printf("-");}
        for(int j=n+(n-2)-i;j>=0;j--) //end hyphens
            printf("-");
        printf("\n");}
}

void Alphabet_Rangoli_down(int n)
{
    for(int i=n*2-2;i>0;i=i-2){
        int num=n;
        for(int j=n+(n-2)+2;j>i;j--)    //front hyphens
            printf("-");
        for(int j=1;j<i;j++){
            printf("%c",num+96);
            (j>=i/2)?num++:num--;   //decide whether inc or dec
            if(j<i-1)               //hyphens in between letters
                printf("-");}
        for(int j=n+(n-2)+2;j>i;j--)    //end hyphens
            printf("-");
        printf("\n");}
}
