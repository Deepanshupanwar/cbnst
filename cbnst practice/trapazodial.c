#include<stdio.h>
float func(float x)
{
    return x*x*x;
}
int main()
{
    int n;
    printf("enter the number of intervals\n");
    scanf("%d",&n);
    float a,b,sum=0,h;
    printf("enter upper bound and lower bound\n");
    scanf("%f%f",&b,&a);
    h=(b-a)/n;
    sum=func(a)+func(b);
    for(float i=a+h;i<b;i=i+h)
    {
        sum+=func(i)*2;
    }
    sum=(sum*h)/2;
    printf("value of integral = %f\n",sum);
    return 0;

}