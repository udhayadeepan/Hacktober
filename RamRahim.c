    /*Write a program that prints the numbers from 1 to 100.
    But for multiples of three print “Ram” instead of the number and
    for the multiples of five print “Rahim”.
    For numbers which are multiples of both three and five print “RamRahim”.*/

    #include<stdio.h>
    int main()
    {
        int start=1; //starting number
        int end=100; //ending number
        for(int i=start;i<=end;i++)
        {
            if(i%3==0) // multiples of 3
            {
                printf("Ram");
            }
            if(i%5==0) // multiples of 5 
            {
                printf("Rahim");
            }
            if(i%3!=0 && i%5!=0) 
            {
                printf("%i",i);
            }
            printf("\n");
        }
    }
