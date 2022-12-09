#include<bits/stdc++.h>

using namespace std;



int  prefixsum(int arr[],int n,int l,int r)
{
      int prefix_sum[n];
       prefix_sum[0]=arr[0];
      for(int i=1;i<n;i++)
      {
           prefix_sum[i]=prefix_sum[i-1]+arr[i]; 
      }
      int sum;
      if(l!=0)
      {
        sum=prefix_sum[r]-prefix_sum[l-1];
      }
      else
      {
        sum=prefix_sum[r];
      }
      return sum;

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
    cout<<"prefix sum is "<<prefixsum(arr,n,2,5);
    return 0;
}

