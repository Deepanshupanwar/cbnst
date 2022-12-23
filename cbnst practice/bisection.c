#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float func(float a)
{  
float eq1=a*a*a - 5*a + 1;
return eq1;
}
int main()
{
float x0,x1,x;
while(1)
{
printf("enter x0 and x1\n");
scanf("%f%f",&x0,&x1);
if(func(x0)*func(x1)<1)
{
    break;
}
else
{
    printf("re-enter the values\n");
}
}
int i=1;
while(1)
{
    x=(x1+x0)/2;
    if(func(x0)*func(x)<0)
    {
        x1=x;
    }
    else if(func(x1)*func(x)<0)
    {
        x0=x;
    }
    printf("at iteration %d x = %f \n",i++,x);
    if(fabs(func(x))<=0.0001)
    {
        printf("final x = %f",x);
        return 0;
    }
}
return 0;
}