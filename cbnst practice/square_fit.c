#include<stdio.h>
int main()
{
    int n;
    float sum1=0,sum2=0,sum3=0,sum4=0,a,b;
    printf("enter the number of obersevation\n");
    scanf("%d",&n);
    float x[n],y[n],mat[2][3];
    printf("enter values of x and y\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f%f",&x[i],&y[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum1+=x[i];
        sum2+=y[i];
        sum3+=x[i]*y[i];
        sum4+=x[i]*x[i];
    }
    mat[0][0]=n;
    mat[0][1]=sum1;
    mat[0][2]=sum2;
    mat[1][0]=sum1;
    mat[1][1]=sum4;
    mat[1][2]=sum3;
    float ratio=mat[1][0]/mat[0][0];
    for(int i=0;i<3;i++)
    {
        mat[1][i]-=ratio*mat[0][i];
    }
    b=mat[1][2]/mat[1][1];
    a=(mat[0][2]-mat[0][1]*b)/mat[0][0];
    printf("\nIntercept = %.2f and Slope = %.2f\n\n",a,b);
}