#include<bits/stdc++.h>
using namespace std;

int counttodigit(int n)
{
   int count = 0;
   int temp=n;
   while(temp!=0)
   {
    temp = temp/10;
    count++;

   }
   return count;
}

int main()
{
    int n ;
  cout<<"enter the digit"<<endl;
  cin>>n;
  cout<<"no of digits are "<<endl;
  cout<<counttodigit(n);
  return 0;
}