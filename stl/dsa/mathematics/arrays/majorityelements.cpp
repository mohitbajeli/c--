#include<bits/stdc++.h>

using namespace std;

int majority(int arr[],int n)
{
    int count =1;
    int res = 0;

    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[res])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            count =1;
            res=i;
        }
    }
    return res;
}

bool element(int arr[],int n)
{
    int count =0;
    int element = majority(arr,n);
    for(int i=0;i<n;i++)
    {
          if(arr[i]==arr[element])
          {
            count++;
          }
    }
    if(count>n/2)
    {
        return true;
    }
    else{
        return false;
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
    if(element(arr,n))
    {
        cout<<"majority element exist ";
    }
    else
     {
        cout<<"majority does not exist";
     }
     return 0;
}