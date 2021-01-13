// beats 45% in runtime


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double largestSumOfAverages(vector<int>& A, int K) {
        int n=A.size();
        vector<double> prefix(n+1,0);
        
        prefix[0]=A[0];
        for(int j=0;j<n;j++)
            prefix[j+1]=prefix[j]+A[j];
        
        
        vector<double> dp(n,0);
        for(int i=0;i<n;i++)
        {
            dp[i]=(prefix[n]-prefix[i])/(n-i);
        }
        
        for(int k=0;k<K-1;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    dp[i]=max(dp[i],(prefix[j]-prefix[i])/(j-i)+dp[j]);
                }
            }
        }
        return(dp[0]);
    }
};