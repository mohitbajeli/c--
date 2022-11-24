#include<bits/stdc++.h>

using namespace std;

int josephus(int n , int k)
{
    if(n==1)
    return 0;

    return (josephus(n-1,k)+k)%n;
}

int main()
{
    int n,k;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the value of k "<<endl;
    cin>>k;
    cout<<"the last element left is "<<josephus(n,k);
    return 0;

}