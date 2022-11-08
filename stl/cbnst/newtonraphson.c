#include<stdio.h>
#include<math.h>

double function(double x)
{
    return x*tan(x)+1;
}

double derivative(double x)
{
    return tan(x)+x*(1/(cos(x)*cos(x)));;
}

double ex(double x)
{
    return (x-(function(x)/derivative(x)));
}

int main()
{
    double a,b,x,x1;
    int steps = 0;
    for(int i=-5;i<5;i++)
    {
        a = i;
        b = i+1;
        if(function(a)*function(b)<0)
        {
            break;
        }
    }
    printf("a = %lf b = %lf\n",a,b);
    x = (a+b)/2;
    do
    {
       x1 = x;
       x = ex(x);
       printf("iteration = %d x = %.4lf\n",++steps,x);

    }while(fabs(x-x1)>=0.0001);
    printf("root is %.4lf\n",x);
    return 0;
    
}