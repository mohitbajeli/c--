#include<bits/stdc++.h>

using namespace std;
void printm(map<int,string>&m)
{
    for(auto it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main()
{
    map<int,string>m;
    m[1] = "abcd";
    m[2] = "vfgh";
    m.insert({5,"sdfg"});

    auto it = m.find(1);  //this will find the iterator of the key which is to be found and if there is no key then it returns m.end()
    if(it==m.end())
    {
        cout<<"no values found"<<endl;
    }  
    else
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
     printm(m);
     m.erase(2); //erases the key.
     printm(m);
    cout<<"after using erase "<<endl;
    printm(m);

}