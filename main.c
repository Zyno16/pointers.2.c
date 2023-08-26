#include <stdio.h>
#include <stdlib.h>

int main()
{float a ,b;
float *p= &a;
float*q;
q=&b;
printf("enter the number a:");
 scantf(" %f",&a);
printf("enter the number b:");
scantf("%f",q);

printf("the sum a+b=%.2f",*p+*q);
printf("the multiplication a*b=%.2f",*p / *q);

printf("the subtraction a-b=%.2f",*p-*q);
if(q!=0)
printf("the device a/q=%.2f",*p * *q);

else printf("la division par 0 est imposible");


    return 0;
}
