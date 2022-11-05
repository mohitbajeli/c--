#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v = {1,2,3,4};

    vector<int> :: iterator it = v.begin(); //syntax for iterator v.begin() points to first value of vector
    for( it = v.begin(); it!=v.end();it++)
    {
      cout<<(*it)<<endl;
    }
}
//aksdmcdslhgfhg