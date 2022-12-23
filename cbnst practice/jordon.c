#include<stdio.h>
#include<math.h>
int main()
{
    printf("x+2y+3z-w=10\n");
    printf("2x+3y-3z-w=1\n");
    printf("2x-y+2z+3w=7\n");
    printf("3x+2y-4z+3w=2\n");
    int n;
    printf("enter n0. of unknown\n");
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
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                float ratio=arr[j][i]/arr[i][i];
                for(int k=0;k<n+1;k++)
                {
                    arr[j][k]-=ratio*arr[i][k];
                }
            }
        }
    }
    printf("diagonal matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }
    float x[n];
    for(int i=0;i<n;i++)
    {
        x[i]=arr[i][n]/arr[i][i];
    }
    printf("result\n");
    for(int i=0; i<n ; i++)
    {
        printf("\nx%d = %.2f",i+1,x[i]);
    }
}