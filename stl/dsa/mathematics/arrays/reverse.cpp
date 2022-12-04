#include<bits/stdc++.h>

using namespace std;

void reverse(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1]=temp;
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
    cout<<"reverse of array is"<<endl;
    reverse(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}