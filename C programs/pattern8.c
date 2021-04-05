#include<stdio.h>
void main()
{
    int i,j,space,row,k;

    printf("Enter the number of rows: ");
    scanf("%d" ,&row);
    space = row+4-1;

    for(i=1;i<=row;i++)
    {
        for(k=space;k>=1;k--)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%d " ,i);
        }
        printf("\n");
        space--;
    }
}
