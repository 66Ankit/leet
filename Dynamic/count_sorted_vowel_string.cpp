// beats 100% in runtime


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   

    
    int countVowelStrings(int n) {
        
        if(n==0)
            return(0);
        if(n==1)
            return(5);
        vector<int> dp(6,1);
        dp[5]=0;
        for(int i=2;i<=n;i++)
        {
            for(int j=4;j>=0;j--)
            {
                dp[j]=dp[j]+dp[j+1];
            }
        }
        int count=0;
        for(auto x:dp)
            count+=x;
        
        return(count);      
    }
};