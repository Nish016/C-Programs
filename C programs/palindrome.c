#include<stdio.h>
void main()
{
    int i,n,sum=0,r;
    printf("Input the numbers: ");
    scanf("%d" ,&n);

    for(i=n;n!=0;n=n/10)
    {
        r=n%10;
        sum=sum*10+r;
    }
    if(sum==i)
        printf("Palindrome");
    else
        printf("Not palindrome");

}
