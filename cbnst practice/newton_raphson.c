#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <math.h>
float f(float x)
{
    return (x*sin(x)+cos(x));
}
float g(float x)
{
    return x*cos(x);
}
int main()
{
 float x0,x1,f1,g1,f2;
 printf("equation: x-sqrt(12)\n");
 printf("enter the intial value of x\n");
 scanf("%f",&x0);
 int i=1;
 while(1)
 {
    g1=g(x0);
    if(g1==0)
    {
        printf("error");
        return 0;
    }
    f1=f(x0);
    x1=x0-f1/g1;
    printf("at iteration %d x= %f\n",i++,x1);
    if(fabs(f(x1))<0.0001)
    {
        printf("final x = %f",x1);
        return 0;
    }
    x0=x1;
 }
}