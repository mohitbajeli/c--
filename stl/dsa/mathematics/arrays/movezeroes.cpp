#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b=temp;
}
void zeroes(int arr[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
         if(arr[i]!=0)
         {
            swap(arr[i],arr[count]);
            count++;
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
    cout<<"new array is "<<endl;
    zeroes(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}