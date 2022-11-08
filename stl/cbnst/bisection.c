#include<stdio.h>
#include<math.h>

double function(double x)
{
    return x*x*x-4*x-9;
}

int main()
{
    double a,b,x,fx,fa,fb;
    int steps = 0;
    for(int i=-5;i<5;i++)
    {
        a=i;
        b=i+1;
        if(function(a)*function(b)<0)
        {
            break;
        }
    }

    printf("a = %lf b = %lf\n",a,b);
    do
    {
        fa = function(a);
        fb = function(b);
        x = (a+b)/2;
        fx = function(x);
        if(fa*fx<0)
        {
            b = x;

        }
        else if(fb*fx<0)
        {
            a = x;
        }
        printf("iteration  = %d x = %.4lf\n",++steps,x);
    } while (fabs(x-a)>=0.0001 || fabs(x-b)>=0.0001);
    printf("root is %.4lf\n",x);
    return 0;
}
    
