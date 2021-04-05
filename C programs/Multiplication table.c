#include<stdio.h>
 void main()
 {
     int n,i;
     printf("Enter the number : ");
     scanf("%d", &n);

     printf("Multiplication table of: %d\n",n);

     for(i=1;i<=n;i++)
     {
         printf("%d * %d = %d\n" ,n,i,(n*i));
     }


 }
