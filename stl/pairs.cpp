#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string>p;
    p={2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string>&p1 = p;
    p1.first=4;
    cout<<p.first<<endl;

    pair<int,int>a[3];
    a[0] = {1,2};
    a[1] = {3,4};
    a[2] = {4,5};
    for(int i = 0;i<3;i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    swap(a[0],a[2]);
    for(int i=0;i<3;i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    } 
 return 0;


}