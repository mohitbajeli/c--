//print the unique key and its no of occurences.
#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int>m;
    int n;
    cout<<"enter no of strings"<<endl;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s] = m[s] + 1; 
    }
    for(auto it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}