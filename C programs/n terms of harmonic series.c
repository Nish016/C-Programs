#include<stdio.h>
void main()
{
    int i,n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d" ,&n);

    for(i=1;i<=n;i++)
    {
        if(i<n)
       {
     printf("1/%d + ",i);
     sum+=1/(float)i;
       }
     if(i==n)
     {
     printf("1/%d ",i);
     sum+=1/(float)i;
     }
     }
        printf("\nSum of Series upto %d terms : %f \n",n,sum);

}
