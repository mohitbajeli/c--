#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,u,u1;
    int n;
    int k;
    int fact;
    int j;
    printf("enter the no of terms\n");
    scanf("%d",&n);

    printf("enter the value of x to find for y\n");
    scanf("%f",&x);
    float a[n][n+1];
    printf("enter the value of x\n");
    for(int i=0;i<n;i++)
    {
        
        scanf("%f",&a[i][0]);
    }
     printf("enter the value of y\n");
    for(int i=0;i<n;i++)
    {
        
        scanf("%f",&a[i][1]);
    }

    for(int j=2;j<n+1;j++)
    {
        for(int i=0;i<n-j+1;i++)
        {
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
    }

    printf("The difference table is \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }

    u=(x-a[n-1][0])/(a[1][0]-a[0][0]);
    fact=1;
    u1=u;
    y=a[n-1][1];
    j=2;
    for(int i=n-2;i>=0;i--)
    {
        y=y+(u1*a[i][j])/fact;
        fact=fact*j;
        u1=u1*(u+(j-1));
        j++;
    }
    printf("value at x = %f is %f\n",x,y);
    return 0;
}