#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d" ,&n);

    printf("The Square of first %d numbers are:" ,n);

    for(i=1;i<=n;i++)
    {
        printf("%d " ,i*i);
        sum+= i*i;
    }
    printf("\nSum of first %d natural numbers is: %d\n" ,n,sum);
}
