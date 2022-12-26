#include<stdio.h>

int main()
{
    int n;
    float sx=0;
    float sy=0;
    float sxy = 0;
    float sx2=0;

    float a,b;
    printf("enter the no of unknowns\n");
    scanf("%d",&n);
    
    float ux,uy;
    printf("enter the value of x for y\n");
    scanf("%f",&ux);
    float x[n],y[n];
    printf("enter the values of x\n");
    for(int i=0;i<n;i++)
    scanf("%f",&x[i]);
    
    printf("enter the value of y\n");
    for(int i=0;i<n;i++)
    scanf("%f",&y[i]);

    for(int i=0;i<n;i++)
    {
        sx=sx+x[i];
        sy=sy+y[i];
        sxy=sxy+x[i]*y[i];
        sx2=sx2+x[i]*x[i];
    }
   b=((sy*sx2)-(sx*sxy))/(n*(sx2)-(sx*sx));
   a= ((n*sxy)-(sx*sy))/(n*(sx2)-(sx*sx));

   uy = a*ux+b;
   printf("the value of y is %f",uy);
   printf("equation is y = %f x+ %f",a,b);



}