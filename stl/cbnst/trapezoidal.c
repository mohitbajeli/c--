#include<stdio.h>


float findvalue(double x)
{
    return x*x*x;
}

int main()
{
    float a,b,n;
    float h,i;
    float sum=0;
    printf("enter the values of a and b\n");
    scanf("%f%f",&a,&b);
    printf("enter the no of intervals\n");
    scanf("%f",&n);

    h=(b-a)/n;
    sum = (findvalue(a)+findvalue(b));

    for( i=a+h;i<b;i=i+h)
    {
        sum=sum+2*(findvalue(i));
    }
    sum = (h*sum)/2;
    printf("value of integration is %f",sum);
    return 0;
}