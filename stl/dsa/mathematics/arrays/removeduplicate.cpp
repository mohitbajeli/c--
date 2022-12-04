#include<bits/stdc++.h>

using namespace std;

int dup(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
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
    cout<<"after removing duplicates the size of array is "<<dup(arr,n);
    return 0;  
}