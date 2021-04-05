#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the number limit: ");
    scanf("%d", &n);

    printf("Numbers are: %d\n");

    for(i=1;i<=n;i++)
    {
        printf("%d " ,2*i-1);
            sum+=2*i-1;
    }
    printf("\nsum of odd numbers is: %d\n" ,sum);
}
