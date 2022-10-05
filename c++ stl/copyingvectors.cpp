#include<bits/stdc++.h>
using namespace std;
 
void printvec(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{
    vector<int>v;
    int n;
    cout<<"enter the no of values"<<endl;
    cin>>n;
    cout<<"enter the values"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int>&v2=v;
    v2.push_back(5);
    printvec(v);
    cout<<"printing v2"<<endl;
    printvec(v2);
}