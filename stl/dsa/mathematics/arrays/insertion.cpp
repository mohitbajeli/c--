#include<bits/stdc++.h>

using namespace std;

int insert(int arr[],int n,int cap,int pos,int no)
{
    if(n==cap){
    cout<<"size full"<<endl;
    return n;
    }
    int index = pos-1;
    for(int i = n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=no;
    
    return (n+1);
}


int main()
{
    int arr[7]={2,5,4,6};
    cout<<"size of the array is "<<endl;
    int size = insert(arr,4,7,2,34);
    cout<<size<<endl;
    cout<<"new array is "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
        /* code */
    }
    return 0;
    
}