#include<bits/stdc++.h>

using namespace std;

void subset(string s,string current,int i)
{
    if(i==s.length())
    {
        cout<<current<<" ";
        return ;
    }
    subset(s,current,i+1);
    subset(s,current+s[i],i+1);
}

int main()
{
    string s = "ABC";
    string current = "";
    int i = 0;
    cout<<"subset of string are "<<endl;
    subset(s,current,i);
    return 0;
}