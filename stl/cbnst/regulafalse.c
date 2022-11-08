#include<stdio.h>
#include<math.h>

double function(double x)
{
    return x-cos(x);
}

int main()
{
    double a,b,x,fx,fa,fb,x1;
    int steps = 0;
    for(int i=-5;i<=5;i++)
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
      x  = (a*fb - b*fa)/(fb-fa);
      fx = function(x);
      if(fb*fx<0)
      {
        x1 = a;
        a=x;
      }
      else if(fa*fx<0)
      {
        x1 = b;
        b = x;
      }
    printf("iteration  = %d x = %.4lf\n",++steps,x);
}while(fabs(x-x1)>=0.0001);

printf("root is %.4lf\n",x);
return 0;
}