//print frequency of a string
#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string,int>m;
    int n;
    cout<<"enter no of strings"<<endl;
    cin>>n;
    cout<<"enter strings"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        string s;
        cin>>s;
        m[s] = m[s] + 1;
    }
    for(auto &value: m)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}