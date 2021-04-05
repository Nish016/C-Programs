#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        sum = sum+i;
    }
    printf("Sum of First %d Natural numbers is: %d", n,sum);
}
