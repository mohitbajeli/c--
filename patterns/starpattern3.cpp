#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[],int n)
{
      for(int i=0;i<n;i++)
    {
        for(int j=i+1 ;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[5]={1,2,3,5,5};
    
    if(duplicate(arr,5))
    {
        cout<<"true"<<endl;
    } 
    else{
        cout<<"false"<<endl;
    }
    return 0;
}