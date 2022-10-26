#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    cout<<"enter the value in array "<<endl;
    for(int i=0;i<5;i++)
    {
    cin>>a[i];
    }

    cout<<"the value inputed are "<<endl;
    for(int i=0 ;i<5;i++)
    {
        cout<<a[i]<<endl;

    }
    //pointer arithmetic
    int *p = a;
    cout<<"the value at [0] is "<<*p<<endl;
    cout<<"the value at [1] is "<<*(p+1)<<endl;
    cout<<"the value at [2] is "<<*(p+2)<<endl;
    return 0;
}