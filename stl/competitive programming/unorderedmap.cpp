//print frequency of a string
#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string,int>m;  //same as maps but printed in random order and time complexity is 0(1) and cannot use complex 
         int n;                  // data structures in keys i.e vector,pair,sets etc.
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