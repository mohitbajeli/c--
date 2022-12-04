#include<bits/stdc++.h>

using namespace std;

void rotate(int arr[],int n,int d)
{
    int temp[d];
    for(int i =0;i<d;i++)
    {
        temp[i]=arr[i];
    }

    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }

    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
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
    cout<<"left rotated array is "<<endl;
    rotate(arr,n,2);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}