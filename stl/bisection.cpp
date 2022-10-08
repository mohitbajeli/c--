#include<bits/stdc++.h>

using namespace std;
 
double solution(double x)
{
    return (x)*log10(x)-1.2;
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
    double a,b;
    cout<<"the value of 1 iteration is "<<solution(0)<<endl;
    for(int i = 1 ;i<20;i++)
    {
        int temp_iter = i ;
        cout<<"the value of "<<i<<" iteration is "<< solution(i)<<endl;
        if((solution(temp)<0 && solution(temp_iter)>0) || (solution(temp)>0 && solution(temp_iter)<0))
        {
            a= temp;
            b=temp_iter;
            break;
        }
        else
        {
            temp = temp_iter;
        }
    }
       double x = (a+b)/2;
       cout<<"the value of a is "<<a<<" "<<"and b is "<<b<<endl;
       while((x-a)>=0.0001 || (x-b)>=0.0001)
       {
        int check_ibt = ibt(a,x,b);
        if(check_ibt == 1)
        {
            b=x;
        }
        else if(check_ibt == 0)
        {
            a=x;
        }
        x=(a+b)/2;
       } 
       cout<<"the value of x is "<<x<<endl;
       return 0;
    
}
