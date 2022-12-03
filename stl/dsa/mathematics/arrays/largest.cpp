#include<bits/stdc++.h>

using namespace std;

int largest(int arr[],int n)
{
    int res = 0;

    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
        {
            res=i;
        }
    }
    return res;
}

int main()
{
    int arr[5];
    cout<<"enter the array"<<endl;
    for(int i=0;i<5;i++){
       cin>>arr[i];
    }

    cout<<"largest element is "<<endl;
    cout<<largest(arr,5)+1<<endl;
}