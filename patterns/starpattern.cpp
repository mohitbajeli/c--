#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"enter no of rows "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
return 0;
}