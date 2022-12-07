#include<bits/stdc++.h>

using namespace std;

int maxevenodd(int arr[],int n)
{
    int res=1;
    int curr =1;
    for(int i=1;i<n;i++)
    {
        if((arr[i-1]%2==0 && arr[i]!=0)||(arr[i-1]%2!=0 && arr[i]%2==0))
        {
            curr++;
            res=max(res,curr);
        }
        else
        {
            curr=1;
        }
         
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
    cout<<"the alternate subarray is "<<maxevenodd(arr,n);
    return 0;
}