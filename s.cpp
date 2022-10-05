#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {0 ,2 ,1, 2, 0};
    for(int i=0 ;i<5;i++)
        {
            for(int j =1;j<5;j++)
            {
                if(a[i]>a[j])
                {
                    a[i]=a[j];
                }
            }
        }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
}
        

