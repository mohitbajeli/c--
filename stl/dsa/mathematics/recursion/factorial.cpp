#include<bits/stdc++.h>

using namespace std;

long long int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }

    return n*fact(n-1);
}

int main()
{
   long long int n ;
   cout<<"enter the no "<<endl;
   cin>>n;

   cout<<"the factorial of a no is "<<endl;
   cout<<fact(n);
}//fdsfsdf