// beats 100 in runtime


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int res=0;
        int n=A.size();
        if(n<2)
            return(0);
        int count=0;
        vector<int> dp;
        for(int i=0;i<n-1;i++)
        {
            dp.push_back(A[i]-A[i+1]);
        }
        int i=1,j=0;
        int cur=dp[0];
        count=1;
        while(i<dp.size())
        {
            if(cur==dp[i])
            {
                count++;
            }
            else
            {
                res=res+(count)*(count-1)/2;
                cur=dp[i];
                count=1;
            }
            i++;
        }
        res=res+(count)*(count-1)/2;
        return(res);   
    }
};