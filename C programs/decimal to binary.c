#include<stdio.h>
void main()
{
    int i,n,bno=0,dn,j;

    printf("\n\nConvert Decimal to Binary:\n ");
    printf("-----------------------\n");

    printf("Enter the number: ");
    scanf("%d" ,&n);

    dn=n;
    j=1;

    for(i=n;i>0;i=i/2)
    {
        bno = bno+(n%2)*j;
        j=j*10;
        n=n/2;
    }
     printf("\nThe Binary of %d is %d.\n\n",dn,bno);
}
