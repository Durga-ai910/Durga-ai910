#include<stdio.h>
 int  main()
 {
     int a2,b2,sum2;
     int a1,b1,sum1;
     printf("enter the real part of first complex number");
     scanf("%d",&a1);
     printf("enter the img part of first complex number");
     scanf("%di",&a2);
     printf("enter the real part of second complex number ");
     scanf("%d",&b1);
     printf("enter the img part of second complex number");
     scanf ("%di",&b2);
     sum1=a1+b1;
     sum2=a2+b2;
     printf("the sum of two complex number is %d+%di",sum1,sum2);
     return 0;
 }
