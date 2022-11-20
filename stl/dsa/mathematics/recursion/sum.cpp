#include<bits/stdc++.h>

using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n+sum(n-1);
}

int main()
{
    int n;
    cout<<"enetr the no of sum"<<endl;
    cin>>n;
    cout<<"the sum of "<<n<<" no is "<<sum(n);
    return 0;
}//sfs