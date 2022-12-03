#include<bits/stdc++.h>

using namespace std;

bool sorted(int arr[],int n )
{
    
    for(int i = 1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
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
    if(sorted(arr,n))
    {
        cout<<"sorted";
    }
    else
    {
        cout<<"unsorted";
    }
    return 0;
}