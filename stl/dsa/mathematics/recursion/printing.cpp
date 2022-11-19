#include<bits/stdc++.h>

using namespace std;

void fun(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n;
    fun(n-1); 
}

int main()
{
    int n;
    cout<<"enter the no tp print"<<endl;
    cin>>n;
    cout<<"the no are"<<endl;
    fun(n);
}