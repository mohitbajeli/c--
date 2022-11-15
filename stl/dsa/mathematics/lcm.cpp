#include<bits/stdc++.h>

using namespace std;

int hcf(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return hcf(b,(a%b));
}

int lcm(int a,int b)
{
    return (a*b)/hcf(a,b);
}

int main()
{
  int a,b;
  cout<<"enter the values "<<endl;
  cin>>a>>b;
  cout<<"lcm is "<<lcm(a,b);
  return 0;
}