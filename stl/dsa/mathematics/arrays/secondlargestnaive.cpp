#include<bits/stdc++.h>

using namespace std;

int largestno(int arr[],int n)
{
    int largest = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            largest = i;
        }
    }
    return largest;

}

int secondlargest(int arr[],int n)
{
    int larg = largestno(arr,n);
    int res = -1;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]!=arr[larg])
        {
            if(res==-1)
            {
                res=i;
            }

            else if(arr[i]>arr[res]){
                res = i;

            }
        }
    }
    return res+1;
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in array"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the second largest element is "<<secondlargest(arr,n);
    return 0;
}