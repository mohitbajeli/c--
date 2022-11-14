#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(int n)
{
    int temp = n;
    int res = 0;
    while(temp!=0)
    {
        int ld = temp%10;
        res = res*10+ld;
        temp = temp/10;
    }
    if(res==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout<<"enter the digit to check palindrome"<<endl;
    cin>>n;
    if(ispalindrome(n))
    {
        cout<<"no is palindrome";
    }
    else
    {
        cout<<"no is not palindrome";
    }
    return 0;
}