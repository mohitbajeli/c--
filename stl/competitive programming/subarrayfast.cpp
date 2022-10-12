#include<bits/stdc++.h>

using namespace std;


 vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>v;
          int currentSum = arr[0], start = 0, i;
 
   
    for (i = 1; i <= n; i++) {
        
        while (currentSum > s && start < i - 1) {
            currentSum = currentSum - arr[start];
            start++;
        }
 
        // If currentSum becomes equal to sum,
        // then return true
        if (currentSum == s) {
            v.push_back(start+1);
            v.push_back(i);
            return v;
        }
 
        // Add this element to currentSum
        if (i < n)
            currentSum = currentSum + arr[i];
    }
    v.push_back(-1);
    return v;
    }