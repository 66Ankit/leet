// beats 6% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    set<int> Day;
    
   int find(int i,vector<int> &dp,vector<int> &cost)
    {
       if(i>365)
           return(0);
       if(dp[i]!=INT_MAX)
       {
           return(dp[i]);
       }
       
       if(Day.find(i)!=Day.end())
       { 
           return(dp[i]=min(find(i+1,dp,cost)+cost[0],min(find(i+7,dp,cost)+cost[1],find(i+30,dp,cost)+cost[2])));
       }
       else
       {
           return(find(i+1,dp,cost));
       }
       
       
    }
    
    int mincostTickets(vector<int>& days, vector<int>& cost) {
        
        
        for(auto d:days)
            Day.insert(d);
        
        int i=1;
        vector<int> dp(366,INT_MAX);
        return(find(i,dp,cost));
    }
};