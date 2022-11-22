#include<bits/stdc++.h>

using namespace std;

 int lastIndex(string s) 
    {
        int count = 0;
        int str = s.length();
           int index = 0;
        
         for(int i=0;i<str;i++)
         {
             if(s[i]==1)
             {
                 index=i;
                 count++;                 
             }
         }
       if(count == 0)
       {
           return -1;
       }
       else
       {
           return index;
       }
    }
int main()
{
  string s = "00001";
  cout<<lastIndex(s);
}