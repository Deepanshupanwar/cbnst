#include<stdio.h>
#define f(x,y) x+y
int main()
{
    int n;
    printf("enter the number of steps\n");
    scanf("%d",&n);
    float x0,xn,y0,y,h,slope;
    printf("enter initial condition and calculation point\n");
    scanf("%f%f%f",&x0,&y0,&xn);
    h=(xn-x0)/n;
    for(int i=0;i<n;i++)
    {
        slope=f(x0,y0);
        y=y0 + h*slope;
        printf("x0 = %f y0 = %f y = %f\n",x0,y0,y);
        y0=y;
        x0=x0+h;
    }
     printf("y = %f\n",y);
}



