#include<bits/stdc++.h>

using namespace std;

int maxsum(int arr[],int n)
{

    int maxfinding=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        maxfinding=max(maxfinding+arr[i],arr[i]);
        res = max(res,maxfinding);
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
    cout<<"maximum sum of sub array is "<<maxsum(arr,n);
    return 0;
}