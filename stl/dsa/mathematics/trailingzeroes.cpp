#include<bits/stdc++.h>

using namespace std;

int trailing(int n )
{
    int res = 0;
    for(int i=5;i<=n;i = i*5)
    {
        res = res+n/i;
    }
    return res;
}

int main()
{
    int n;
    cout<<"enter the factorial of which we require trailing zeroes "<<endl;
    cin>>n;
    
    cout<<"no of trailing zeroes are"<<endl;
    cout<<trailing(n);
}