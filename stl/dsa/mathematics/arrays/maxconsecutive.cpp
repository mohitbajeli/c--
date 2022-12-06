//program for finding maximum consecutive ones in array

#include<bits/stdc++.h>

using namespace std;


int maxcon(bool arr[],int n)
{
    int res=0;
    int curr=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            curr=0;
        }
        else
        {
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
     cin>>n;
    bool arr[n];
    cout<<"enter the elements in array"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"count of maximum consecutive ones is "<<maxcon(arr,n);
    return 0;
}