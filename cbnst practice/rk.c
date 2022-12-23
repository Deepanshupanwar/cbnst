#include<stdio.h>
#define f(x,y) (y*y-x*x)/(y*y+x*x)
int main()
{
    int n;
    printf("enter the number of steps\n");
    scanf("%d",&n);
    float x0,xn,y0,y,h,k1,k2,k3,k4,k;
    printf("enter initial condition and calculation point\n");
    scanf("%f%f%f",&x0,&y0,&xn);
    h=(xn-x0)/n;
    for(int i=0;i<n;i++)
    {
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);
        k=(k1+2*k2+k3*2+k4)/6;
        y=y0+k;
        printf("x0 = %f y0 = %f y = %f\n",x0,y0,y);
        y0=y;
        x0=x0+h;
    }
     printf("%f y = %f\n",y);
}