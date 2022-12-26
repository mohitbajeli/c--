#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    float a,b;
    float sum1=0;
    float sum2=0;
    float sum3=0;
    float sum4=0;
    printf("enter the no of unknowns\n");
    scanf("%d",&n);
    float x[n],y[n];
    float agumented_matrix[2][3];
    printf("enter values of x\n");
    for(int i=0;i<n;i++)
    scanf("%f",&x[i]);

    printf("enter values of y\n");
    for(int i =0;i<n;i++)
    scanf("%f",&y[i]);
    
    for(int i=0;i<n;i++)
    {
        sum1=sum1+x[i];
        sum2=sum2+y[i];
        sum3=sum3+(x[i]*y[i]);
        sum4=sum4+(x[i]*x[i]);
    }

    agumented_matrix[0][0]=n;
    agumented_matrix[0][1]=sum1;
    agumented_matrix[0][2]=sum2;
    agumented_matrix[1][0]=sum1;
    agumented_matrix[1][1]=sum4;
    agumented_matrix[1][2]=sum3;

    int ratio = agumented_matrix[1][0]/agumented_matrix[0][0];

    for(int i=0;i<3;i++)
    {
        agumented_matrix[1][i]=agumented_matrix[1][i]-(ratio*agumented_matrix[0][i]);
    }

    b = agumented_matrix[1][2]/agumented_matrix[1][1];
    a = (agumented_matrix[0][2]-(agumented_matrix[0][1]*b))/agumented_matrix[0][0];
    printf("\n intercept = %.2f and slope = %.2f\n\n",a,b);

    printf("equation is y = %.2f + %.2fx ",a,b);



}