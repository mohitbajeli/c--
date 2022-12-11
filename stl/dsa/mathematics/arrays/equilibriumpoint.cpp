#include<bits/stdc++.h>

using namespace std;

bool equilbrium(int arr[],int n)
{
    int sum=0;
    int curr_sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(int i=0;i<n;i++){
        if(curr_sum==sum-arr[i])
        {
            cout<<"the equilibrium point is "<<arr[i]<<endl;
           return true;           
        }
         curr_sum+=arr[i];
         sum-=arr[i];
    }
    return false;


}
//dfsfsd

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
    if(equilbrium(arr,n))
    {
        cout<<"equilibrium point exist"<<endl;
    }
    else
    {
        cout<<"does not exist"<<endl;
    }
    return 0;
}