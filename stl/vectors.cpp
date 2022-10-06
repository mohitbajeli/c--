#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>&v)
{
    for(int i=0 ; i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{
    vector<int>v;
    int n;
    cout<<"enter no of vectors "<<endl;
    cin>>n;
    cout<<"enter values in vector"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    printvec(v);
return 0;
}