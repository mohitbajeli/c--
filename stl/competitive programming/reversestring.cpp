#include<iostream>
#include<string>
#include<cstring>
using namespace std;
char *My_rev(char *str)
{
  int i,len=0,n;
  char temp;
  len=strlen(str);
  n=len-1;
  for(i = 0; i <=(len/2); i++)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
  return str;
}
int main()
{ 
    char My_string[]="Journal Dev reverse example";
	cout<<"Reverse string using My_rev()...\n";
    My_rev(My_string);
	cout<<My_string;
    return 0;
}