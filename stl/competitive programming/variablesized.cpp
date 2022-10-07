#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,y;
    cout<<"enter the no of array"<<endl;
    cin>>n>>y;
    vector<int>v[n];
    int w,r;

    for(int i =0 ;i<n;i++)
    {
        int z;
        cout<<"enter size of array"<<endl;
        cin>>z;
        for(int j=0;j<z;j++)
        {
            int q;
            cin>>q;
            v[i].push_back(q);
        }
        
    }
    for(int l=0; l<y; ++l)
    {
        cin >> w >> r;
        cout<<v[w][r]<<endl;
    }
    
}