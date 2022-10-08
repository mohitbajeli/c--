//Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the missing number from the first N integers.
#include<bits/stdc++.h>

using namespace std;

int MissingNumber(vector<int>& array, int n) {
        int sumarray = 0;
        for(int i=0 ; i<array.size();i++)
        {
            sumarray = sumarray + array[i];
        }
        int sumtotal = n*(n+1)/2;
        return sumtotal - sumarray;
        }
int main()
{
    vector<int>array={1,2,3,5};
    cout<<" the missing number is "<< MissingNumber(array,5);
}