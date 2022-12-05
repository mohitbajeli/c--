#include<bits/stdc++.h>

using namespace std;

int maxdiff(int arr[],int n)
{
    int res = arr[1]-arr[0];
    int minimum = arr[0];

    for(int j=0;j<n;j++)
    {
        res = max(res,arr[j]-minimum);
        minimum = min(minimum,arr[j]);
    }
    return res;
}

int main()
{
     int n ;
    cout<<"enter the size of array"<<endl;
     cin>>n;
    int arr[n];
    cout<<"enter the elements in array"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"max diff is "<<maxdiff(arr,n);
    return 0;
}