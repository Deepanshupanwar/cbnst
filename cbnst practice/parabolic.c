#include<stdio.h>
int main()
{
    int n;
    float sx=0,sy=0,sxy=0,sx2y=0,sx2=0,sx3=0,sx4=0,a,b,c;
    printf("Enter no. of observations\n");
    scanf("%d",&n);
    float x[n],y[n],augmented_matrix[3][4];
    printf("Enter values of x\n");
    for(int i=0;i<n;i++)
      scanf("%f%f",&x[i],&y[i]);
    for(int i=0;i<n;i++)
    {
        sx+=x[i];
        sy+=y[i];
        sx2+=x[i]*x[i];
        sx3+=x[i]*x[i]*x[i];
        sx4+=x[i]*x[i]*x[i]*x[i];
        sxy+=x[i]*y[i];
        sx2y+=x[i]*x[i]*y[i];
    }
    augmented_matrix[0][0]=sx2;
    augmented_matrix[0][1]=sx;
    augmented_matrix[0][2]=n;
    augmented_matrix[0][3]=sy;
    augmented_matrix[1][0]=sx3;
    augmented_matrix[1][1]=sx2;
    augmented_matrix[1][2]=sx;
    augmented_matrix[1][3]=sxy;
    augmented_matrix[2][0]=sx4;
    augmented_matrix[2][1]=sx3;
    augmented_matrix[2][2]=sx2;
    augmented_matrix[2][3]=sx2y;
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            float ratio=augmented_matrix[j][i]/augmented_matrix[i][i];
            for(int k=0;k<4;k++)
            {
                augmented_matrix[j][k]-=ratio*augmented_matrix[i][k];
            }
        }
    }
    float val[3];
    val[2]=augmented_matrix[2][3]/augmented_matrix[2][2];
    for(int i=1;i>=0;i++)
    {
        float sum=0;
        for(int j=i+1;j<4;j++)
        {
            sum+=augmented_matrix[i][j]*val[j];
        }
        val[i]=(augmented_matrix[i][3]-sum)/augmented_matrix[i][i];
    }
    printf("\nValue of a = %.2f \nValue of b = %.2f\nValue of c = %.2f\n\n",val[0],val[1],val[2]); 
}