#include<stdio.h>
float fun(float x)
{
    return 1/(1-x*x);
}
int main()
{
int pos=1;
int n;
printf("enter the number of intervals\n");
scanf("%d",&n);
float a,b,h,sum;
printf("enter lower bound and upper bound\n");
scanf("%f%f",&a,&b);
h=(b-a)/n;
sum=fun(a)+fun(b);
for(float i=a+h;i<b;i=i+h)
{
    if(pos%2==0)
    {
        sum+=2*fun(i);
    }
    else
    {
        sum+=4*fun(i);
    }
    pos++;
}
 sum=(sum*h)/3;
 printf("value of integral = %f\n",sum);
}