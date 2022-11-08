#include<stdio.h>
#include<math.h>

double function(double x)
{
    return x*x*x - 4*x-9;
}

int main()
{
    double a,b,fx,fa,fb,x;
    int steps = 0;
    for(int i=-10;i<=10;i++)
    {
        a = i;
        b = i+1;
        if(function(a)*function(b)<0)
        {
            break;
        }
    }
    printf("a = %lf b = %lf ",a,b);

    do
    {
        fa = function(a);
        fb = function(b);
        x = (a*fb-b*fa)/(fb-fa);

        a = b;
        b = x;

        fa = fb;
        fb = fx;

        printf("iteration = %d  x = %.4lf\n",++steps,x);
    } while (fabs(x-a)>=0.0001 || fabs(x-b)>=0.0001);
    printf("root is %.4lf\n",x);
    return 0;
}
    
