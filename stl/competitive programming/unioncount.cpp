#include<bits/stdc++.h>

using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        set<int>s;
        int count = 0;
        for(int i = 0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int j=0;j<m;j++)
        {
            s.insert(b[j]);
        }
        
        count = s.size();
        return count;
        
        
    }

    int main()
    {
        int a[7]={2,4,1,3,6,7,8};
        int b[8]={7,5,6,3,12,2,5,8};
        cout<<"no of count "<<doUnion(a,7,b,8)<<endl;

    }