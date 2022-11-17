#include<bits/stdc++.h>

using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    long long x = 0;
    long long y=0;
    sort(a,a+n);
    x = a[0];
    y = a[n-1];
    
    pair<int,int>p(x,y);
    
    return p;
}

int main()
{
    long long a[]= {1,678,456};
    pair<int,int>p = getMinMax(a,3);
    cout<<"min element is "<<p.first<<endl;
    cout<<"max element is "<<p.second;
}//hjk