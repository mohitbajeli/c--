#include<bits/stdc++.h>

using namespace std;

int maxpieces(int n,int a,int b,int c)
{
    if(n==0)
    return 0;

    if(n<=-1)
    return -1;

    int res = max(maxpieces(n-a,a,b,c),maxpieces(n-b,a,b,c),maxpieces(n-c,a,b,c));

    if(res == -1)
    {
        return -1;
    }

    return res+1;
}

int main()
{
    int n;
    cout<<"enter the length of rope"<<endl;
    cin>>n;
    int a,b,c;
    cout<<"enter the length you want to cut"<<endl;
    cin>>a>>b>>c;
    cout<<"the max pieces rope can be cut are"<<endl;
    cout<<maxpieces(n,a,b,c);
    return 0;
}