#include<stdio.h>
#include<math.h>
float f1(float y,float z)
{
    return (17-y+2*z)/20;
}
float f2(float x,float z)
{
    return (-18-3*x+z)/20;
}
float f3(float x,float y)
{
    return (25-2*x+3*y)/20;
}
int main()
{
   printf("3x + 20y - z = -18\n");
   printf("2x - 3y + 20z = 25\n");
   printf("20x + y - 2z = 17\n");
   printf("equations in diagonally dominant form\n");
   printf("20x + y - 2z = 17\n");
   printf("3x + 20y - z = -18\n");
   printf("2x - 3y + 20z = 25\n");
   float x0=0,y0=0,z0=0,x1,y1,z1,e=0.0001;
   int i=1;
   while(1)
   {
    x1=f1(y0,z0);
    y1=f2(x0,z0);
    z1=f3(x0,y0);
    printf("at iteration %d x = %f y = %f z = %f\n",i++,x1,y1,z1);
    if(fabs(x1-x0)<e&&fabs(y1-y0)<e&&fabs(z1-z0)<e)
    {
        printf("final x = %f y = %f z = %f\n",x1,y1,z1);
        return 0;
    }
    x0=x1;
    y0=y1;
    z0=z1;
   }
}