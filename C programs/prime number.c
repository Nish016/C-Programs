#include<stdio.h>
void main()
{
    int n,i,flag=0;
    printf("Enter the number: ");
    scanf("%d" ,&n);

    for(i=2;i<=n/2;i++)
    {
       if(n%i==0)
       {
           flag=1;
           break;
       }
    }
        if(flag==0 && n!=1)
            printf("Prime Number");
        else
            printf("Not a Prime Number");

}
