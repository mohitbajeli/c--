#include<bits/stdc++.h>

using namespace std;

void frequency(int arr[],int n)
{
   int freq = 1;
   int i = 1;
   while(i<n)
   {
    while(i<n && arr[i]==arr[i-1])
    {
        
            freq++;
            i++;
        
    }
    cout<<arr[i-1]<<" = "<<freq<<endl;
    i++;
    freq = 1;
   }
    if(n==1 || arr[n-2]!=arr[n-1])
    {
        cout<<arr[n-1]<<" = "<<1;
    }
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
    cout<<"frequencies are"<<endl;
    frequency(arr,n);
    return 0;
}