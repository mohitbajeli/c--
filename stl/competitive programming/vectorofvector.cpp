#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }
}

int main()
{
    vector<vector<int>>v;
    int N;
    cout<<"enter no of vectors"<<endl;
    cin>>N;
    for(int i= 0;i<N;i++)
    {
        int n;
        cout<<"enter no of values in vector "<<endl;
        cin>>n;
        vector<int>temp; // here we will use temp vector to store values of a individual vector as a vector is not defined like in the case of vector of vector 
                for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<N;i++)
    {
        printvec(v[i]);
        cout<<endl;
    }
}