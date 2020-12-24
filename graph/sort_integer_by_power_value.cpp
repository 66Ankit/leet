#include<bits/stdc++.h>
using namespace std;

// recursive solution
// beats 9% in runtime

class Solution {
public:
    
    
    static
    bool comp(pair<long long,long long> a,pair<long long,long long> b)
    {
         if(a.second<b.second)
             return(1);
         else if(a.second==b.second)
             return(a.first<b.first);
         return(0);
    }
    
    long long power(long long val,vector<long long> &dp)
    {
         if(val==1)
             return(0);
         if(dp[val]!=-1)
             return(dp[val]);
         
         if(val%2==0)
             return(dp[val]=power(val/2,dp)+1);
         else
             return(dp[val]=power(3*val+1,dp)+1);
    }
    
    
    int getKth(int lo, int hi, int k) {
     
        vector<pair<long long,long long>> vec;
        vector<long long> dp(1000000,-1);
        for(int i=lo;i<=hi;i++)
        {
            vec.push_back(make_pair(i,power(i,dp)));
        }
        
        sort(vec.begin(),vec.end(),comp);
        
        return(vec[k-1].first);
        
    }
};