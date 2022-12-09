#include<bits/stdc++.h>

using namespace std;

bool maxsum(int arr[],int n,int sum)
{
    int curr_sum=arr[0];
    int s=0;
    for(int i=1;i<n;i++)
    {
       while(curr_sum>sum && s<i-1)
       {
         curr_sum-=sum;
       }
       if(curr_sum==sum)
       {
        return true;
       }
       if(i<n)
       {
        curr_sum+=sum;
       }
    }
    return (curr_sum==sum);
}

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(maxsum(arr,n,45))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}