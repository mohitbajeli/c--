#include<bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if(n==0 || n==1){
    return 1;
    }

    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"enter the name for factorial"<<endl;
    cin>>n;
    int ans = fact(n);
    cout<<"the factorial of the no is "<<endl;
    cout<<ans;
    return 0;
}