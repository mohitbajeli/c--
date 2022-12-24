#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001

double findvalue(double x)
{
    return x*x*x - 2*x-5;
}

double bisect(double x1,double x2)
{
    return (x1+x2)/2;
}


int main()
{
    double x1,x2,x,x3;
    int i=1;
    int maxiteration;
    printf("enter no of maximum iteration\n");
    scanf("%d",&maxiteration);

    do
    {
        printf("enter the initial roots\n");
        scanf("%lf%lf",&x1,&x2);

        if(findvalue(x1)*findvalue(x2)>0)
        {
            printf("invalid input\n");
            continue;
        }
        else{
            printf("a = %lf b = %lf",x1,x2);
            break;
        }
    }while(1);

    x = bisect(x1,x2);

    do
    {
       if(findvalue(x)*findvalue(x2)<0)
       {
        x1=x;
       }
       else
       {
        x2 = x;
       }
       printf("iteration = %d root = %lf\n",i,x);
       x3 = bisect(x1,x2);
       if(fabs(x-x3)<EPSILON)
       {
        printf("total iteration = %d root = %lf",i,x);
        return 0;
       }
       x = x3; //important
       i++;
    }while (i<=maxiteration);
    printf("total iteration = %d root = %lf",--i,x);
    return 0;
}
    
    

