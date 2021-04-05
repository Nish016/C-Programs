#include<stdio.h>
void main()
{
    int i,n,r,sum=0;
    printf("Input number of terms: ");
    scanf("%d" ,&n);

    for(i=n;n!=0;n=n/10)
    {
         r= n%10;
         sum=sum*10+r;
    }
    printf("The number in reverse order is : %d \n",sum);


}
