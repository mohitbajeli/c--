 #include<bits/stdc++.h>

 using namespace std;

 

 vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int sum =0 ;
            for(int j=i;j<n;j++)
            {
                sum = sum +arr[j];
                if(sum == s)
                {
                    v.push_back(i+1);
                    v.push_back(j+1);
                    return v;
                }
            }
        }
        v.push_back(-1);
        return v;
    }
int main()
{
    int arr[]= {3,5,4,6,7};
    vector<int>v= subarraySum(arr,5,9);
    cout<<"indices are "<<endl;
    cout<<v[0]<<" "<<v[1]<<endl;


}