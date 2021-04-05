#include<stdio.h>
void main()
{
    int n,i,sum=0,t=9;
    printf("Enter the number of terms: ");
    scanf("%d" ,&n);

    for(i=1;i<=n;i++)
    {
        sum+= t;
        printf("%d   " ,t);
        t = t*10+9;
    }
    printf("\nThe sum of the series = %d \n",sum);
}
