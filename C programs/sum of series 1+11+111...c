#include<stdio.h>
void main()
{
    int n,i,t=1,sum=0;
    printf("Enter the number of values: ");
    scanf("%d" ,&n);
    printf("Series is: ");

    for(i=1;i<=n;i++)
    {
        printf("%d   " ,t);
        t=t*10+1;
        sum+= t;
    }
    printf("Sum of series is %d" ,sum);
}
