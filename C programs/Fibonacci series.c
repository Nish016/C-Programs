#include<stdio.h>
void main()
{
    int n,i,p=0,q=1,sum=0,temp;
    printf("Input number of terms: ");
    scanf("%d" ,&n);

    printf("Here is the Fibonacci series upto  to %d terms : \n",n);
    printf("% 5d % 5d", p,q);

    for(i=3;i<=n;i++)
    {
        temp=p+q;
        printf("% 5d" ,temp);
        p=q;
        q=temp;
    }
    printf("\n");

}
