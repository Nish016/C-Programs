#include<stdio.h>
void main()
{
    int n,i,sum=0,d,j;
    long fact;
    printf("Enter the number to check: ");
    scanf("%d", &n);

    d=n;
    for(i=n;i>0;i=i/10)
    {
        fact=1;
        for(j=1;j<=i%10;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    if(sum==d)
    {
        printf("\n%d is Strong number.\n\n", d);
    }
    else
    {
        printf("\n%d is not Strong number.\n\n", d);
    }
}
