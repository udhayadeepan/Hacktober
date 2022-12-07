//3 input angles whether make a triangle or not
#include<stdio.h>
int main()
{
    int Angle1,Angle2,Angle3; //angles
    scanf("%i %i %i",&Angle1,&Angle2,&Angle3);
    if(Angle1==0 || Angle2==0 || Angle3==0)  //if anyone of the angle is 0 ,it doesn't make triangle.
    {
        printf("false");
    }
    else if(Angle1+Angle2+Angle3==180)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
