#include<stdio.h>
 void main()
 {
     int n,i,cube;

     printf("Input the number of terms: ");
     scanf("%d", &n);

     for(i=1;i<=n;i++)
     {
         cube = (i*i*i);
         printf("Number is: %d and Cube of %d is: %d\n", i,i,cube);
     }
 }
