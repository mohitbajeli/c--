#include<bits/stdc++.h>

using namespace std;

int stock(int arr[],int n)
{
    int profit = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit+=(arr[i]-arr[i-1]);
        }
    }
        return profit;

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
    cout<<"max profit is "<<stock(arr,n);
    return 0;
}