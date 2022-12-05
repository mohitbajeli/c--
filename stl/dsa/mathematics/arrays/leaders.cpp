#include<bits/stdc++.h>

using namespace std;


void leader(int arr[],int n)
{
    int curr_leader = arr[n-1];
    cout<<curr_leader<<" ";
    for(int i = n-2;i>=0;i--)
    {
        
        if(curr_leader<arr[i])
        {
            cout<<arr[i]<<" " ;   
            curr_leader = arr[i];
        }
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
    cout<<"array is "<<endl;
    leader(arr,n);
    
}