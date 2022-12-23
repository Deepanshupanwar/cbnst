#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float func(float x)
{
  return (cos(x)+1)/3;
}
float check(float x)
{
  return -(sin(x)/3);
}
int main()
{
    float x,x1;
    while(1)
    {
        scanf("%f",&x);
        if(fabs(check(x))<1)
        {
            break;
        }
        else
        {
            printf("enter the values again\n");
        }
    }
    int i=1;
    while(1)
    {
        x1=func(x);
        printf("at iteration %d x = %f\n",i++,x1);
        if(fabs(x-x1)<=0.0001)
        {
            return 0;
        }
        x=x1;
    }
}