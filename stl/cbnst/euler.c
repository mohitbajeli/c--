#include<stdio.h>
#include<stdlib.h>

#define f(x,y) x+y


int main()
{
    float x0,y0,xn,yn,slope,h;
    int n;
    printf("enter the initial condition\n");
    printf("x0 = ");
    scanf("%f",&x0);
    printf("\ny0 = ");
    scanf("%f",&y0);
    printf("\nxn = ");
    scanf("%f",&xn);
    printf("enter the no of steps\n");
    scanf("%d",&n);
    printf("\nx0\ty0\tslope\tyn\t");
    printf("\n-----------\n");
    h=(xn-x0)/n;
    for(int i=0;i<n;i++)
    {
        slope = f(x0,y0);
        yn = y0+h*slope;
        printf("%.4f\t%.4f\t%.4f\t%.4f\n",x0,y0,slope,yn);
        y0=yn;
        x0=x0+h;

        
    }
    printf("value at xn = %.4f is yn = %.4f",xn,yn);
    return 0;
}