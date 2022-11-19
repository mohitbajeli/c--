#include<bits/stdc++.h>

using namespace std;

int fib(int n)
{
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cout<<"enter the no of fibonacci series "<<endl;
    cin>>n;
    cout<<"no of fibonacci series is "<<endl;
    cout<<fib(n);
}