#include<bits/stdc++.h>
//#include<iomanip.h>
#include "this" //this is a header file.
int b=34;
using namespace std;

int main()
{
    int a=36;
    int b=3;
    float c = 34.4f;
    long double d = 23.2l;  //by default the values will be double

    cout<<"size of 34.4 "<<sizeof(34.4)<<endl;

    cout<<"size of 34.4f "<<sizeof(34.4f)<<endl;  // sizeof is used to find the size of the value

    cout<<"size of 34.4l "<<sizeof(34.4l)<<endl;

    cout<<"the sum is "<<a+b<<endl;

    cout<<"the value of local b is "<<b<<endl;

    cout<<"the value of global b is "<<::b<<endl;  // :: is used for printing global variable
    
    int x =89;
    int &y = x; //here y is a reference variable which points to x
    cout<<x<<endl;

    cout<<y<<endl;

    float z= 34.5;
    cout<<z<<endl;
    cout<<"typecasting the value of z to int is"<<int(z)<<endl;

    int v = int(z); // this is also a way to typecast
    cout<<v<<endl;

    //constants

    int g = 67;
    g=9;
    cout<<"the value of g is " <<g<<endl; //here the g value will be overloaded as it is not a constant.

     const int h = 56;
     cout<<"the value of h was "<<h<<endl;
    // h=78; this shows that the value is constant and cannot be modified
    int m = 9;
    int n = 45;
    int r = 1267;
    cout<<setw(4)<<m<<endl;
    cout<<setw(4)<<n<<endl;
    cout<<setw(4)<<r<<endl; //here setw (set field width)is a manipulator which alter the format of printing a value and display
    //apart from this endl is also a manipulator
    



}