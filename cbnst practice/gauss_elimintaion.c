#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("equations\n");
    printf("2x1 + 3x2 = 4\n");
    printf("5x1 + 6x2 = 1\n");
    int n;
    printf("enter the no. of unknowns\n");
    scanf("%d",&n);
    float arr[n][n+1];
    printf("enter the matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            scanf("%f",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            float ratio=arr[j][i]/arr[i][i];
            for(int k=0;k<n+1;k++)
            {
                arr[j][k]-=ratio*arr[i][k];
            }
        }
    }
    printf("upper triangular matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }
    float x[n];
    x[n-1]=arr[n-1][n]/arr[n-1][n-1];
    for(int i=n-2;i>=0;i--)
    {
        float s=0;
        for(int j=i+1;j<n;j++)
        {
            s+=arr[i][j]*x[j];
        }
         x[i]=(arr[i][n]-s)/arr[i][i];
    }
    printf("\nThe result is :\n");
    for(int i=0; i<n ; i++)
    {
        printf("\nx%d = %.2f",i+1,x[i]);
    }
}