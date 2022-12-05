//naive solution
#include<bits/stdc++.h>

using namespace std;

int water(int arr[],int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int lmax=arr[i];
        for(int j=0;j<i;j++)
        {
            if(lmax<arr[j])
            {
                 lmax=arr[j];
            } 
        }
        int rmax=arr[i];
        for(int j=i;j<n;j++)
        {
            if(rmax<arr[j])
            {
                rmax=arr[j];
            }
        }
        res = res+min(rmax,lmax)-arr[i];

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
    cout<<"maximum water that can be stored is "<< water(arr,n);
    return 0; 
}