//given an array of integer and a no k find max sum of k consecutive elements

#include<bits/stdc++.h>

using namespace std;

int maxsum(int arr[],int n,int k)
{
    int curr_sum=0;
    int max_sum=0;

    for(int i=0;i<k;i++)
    {
        curr_sum+=arr[i];
    }
    max_sum=curr_sum;
    for(int i=k;i<n;i++)
    {
         curr_sum = curr_sum+arr[i]-arr[i-k];
         max_sum = max(max_sum,curr_sum);
    }
    return max_sum;
}

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int k;
    cout<<"enter no of terms in subarray "<<endl;
    cin>>k;
    int arr[n];
    cout<<"enter the elements in array"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"maximum sum is "<<maxsum(arr,n,k);
    return 0;
}