#include<stdio.h>
 void main()
 {
     int n;
     float i,value,sum=0,avg;

     printf("How many numbers you want to add?\n");
     scanf("%d", &n);

     printf("Enter %d integers: \n", n);

     for(i=1;i<=n;i++)
     {
        scanf("%f", &value);
        sum = sum + value;
     }

     printf("Sum is: %f\n", sum);
     avg = (sum/n);
     printf("Average is: %f", avg);
 }
