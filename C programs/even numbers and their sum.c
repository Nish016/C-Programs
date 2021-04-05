#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Number of terms: ");
    scanf("%d" ,&n);

    printf("The %d terms are: \n" ,n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n" ,2*i);
        sum+= i*2;
    }
    printf("Sum of %d even terms is: %d" ,n,sum);
}
