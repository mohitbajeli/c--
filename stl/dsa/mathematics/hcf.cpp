#include<bits/stdc++.h>

using namespace std;

int hcf(int a,int b)
{
    int res = 0;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }

    }
    return a;
}

int main()
{
    int a,b;
    cout<<"enter the no for hcf"<<endl;
    cin>>a>>b;
    cout<<"hcf is "<<hcf(a,b);
    return 0;
}