#include<bits/stdc++.h>

using namespace std;

double solution(double x)
{
    return x*x*x - 2*x - 5;
}

int ibt(double a,double x,double b)
{
    if(solution(a)*solution(x)<0)
    {
        return 1;
    }
    else if(solution(b)*solution(x)<0)
    {
        return 0;
    }
    else 
    {
        return -1;
    }
}                                                                                                                                                                                                                                                                                                                                                                                                  
int main()
{
 double temp = 0;
 double a ;
 double b ;
 double x;
 cout<<"the value for 1 iteration is"<<temp<<endl;
 for(int i=1;i<20;i++)
 {
    double temp_iter = i;
    cout<<"the value of "<<i<<" is "<<solution(temp_iter)<<endl;
    if(((solution(temp))>0 && (solution(temp_iter<0))|| (solution(temp))<0 && solution(temp_iter)>0))
    {
        a = temp;
        b= temp_iter;
        break;
    }
    else{
        temp =temp_iter;
    }
 }
 cout<<"the value of a is "<<a<<endl;
 cout<<"the value of b is "<<b<<endl;

 x=(a+b)/2;
 
 while((x-a)>0.0001 || (x-b)>0.0001)
 {
    int check_ibt = ibt(a,x,b);
    if(check_ibt == 1)
    {
        b = x;
    }
    else if(check_ibt == 0)
    {
        a = x;
    }
    x= (a+b)/2;

 }
 cout<<"value of x is "<<x;


}