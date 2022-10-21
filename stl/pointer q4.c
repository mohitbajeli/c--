#include<stdio.h>
int sum(int *x,int *y);
float avg(int *x,int *y);
int main()
{
    int a;
    int b;
    printf("enter the first value \n");
    scanf("%d",&a);

    printf("enter the second value \n");
    scanf("%d",&b);
    int e=sum(&a,&b);
    printf("the sum of two numbers is %d\n",e);
    printf("the avg of two numbers is %f\n",avg(&a,&b));
    return 0;

}

int sum(int *x,int *y)
{
    int c;
    c=*x+*y;
    return c;
}

float avg(int *x,int *y)
{
    float d;
    d=(float)(*x+*y)/2;
    return d;
}
