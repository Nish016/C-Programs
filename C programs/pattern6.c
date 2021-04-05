#include<stdio.h>
void main()
{
    int i,j,k,space,n=1;
    space = 7;
    for(i=1;i<=4;i++)
    {

        for(k=space;k>=1;k--)
        {
            printf(" ");
        }


        for(j=1;j<=i;j++)
        printf("%d " ,n++);
        printf("\n");
        space--;

    }

}
