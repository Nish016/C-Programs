#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Sum of numbers between 100 and 200 divisible by 9: ");

    for(i=100;i<200;i++)
    {
        if(i%9==0)
        {
            printf("% 5d" ,i);
            sum+=i;
        }
    }
    printf("\n\nThe sum : %d \n",sum);
}

