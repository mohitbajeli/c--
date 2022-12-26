#include<stdio.h>
float cal(float u_temp,int i)
{
    float u=u_temp;
    for(int j=2;j<=i;j++)
    {
        if(j%2==0)
        {
            u=u*(u_temp-(j-1));
        }
        else{
            
            u=u*(u_temp+(j-1));
        }
    }
    return u;
}
int main()
{
    int n=7;
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


    for(int j=2;j<=n;j++)
    {
        for(int i=0;i<n-j+1;i++)
        {
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
    }
     // printing table
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
    float x=1.17;
    float sum=a[n/2][1];
    float u=(x-a[n/2][0])/(a[1][0]-a[0][0]);
    float u1=u;
    float fact=1;
    for(int i=2;i<=n;i++)
    {
        sum+=(u1*a[n-i/2][i])/fact;
        fact=fact*i;
        u1=cal(u,i);

    }
    printf("%f is the ans",sum);
    return 0;
}
