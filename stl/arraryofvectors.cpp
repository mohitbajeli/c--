#include<bits/stdc++.h>

using namespace std;

void printvec(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int N;
    cout<<"enter no of arrays"<<endl;
    cin>>N;
    vector<int>v[N];
    for(int i=0;i<N;i++)
    {
        int n;
        cout<<"enter no of elements in an array "<<endl;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0 ;i<N;i++)
    {
        printvec(v[i]);
    }
}//sdbfgbffgdfdvsvfgh