#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {1,2,3,4,5};

    for(int value : v)  //here copies of value of v comes into (value)
    {
        cout<<value<<endl;
    }
    cout<<"after using reference value"<<endl;
    for(int &value : v)
    {
        value++;
    }

    for(int value : v)
    {
        cout<<value<<endl;
    }
}