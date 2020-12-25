#include<bits/stdc++.h>
using namespace std;

// beats 13% solutions in runtime

class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        set<pair<int,int>> mp;
        vector<int> degree(n,0);
        for(auto edge:roads)
        {
            mp.insert(make_pair(edge[0],edge[1]));
            mp.insert(make_pair(edge[1],edge[0]));
            degree[edge[0]]++;
            degree[edge[1]]++;
            
        }
   
        int res=0; 

         // O(n^2) solution
        
        for(int i=0;i<n;i++) // searching for maximal pair
        {
            for(int j=i+1;j<n;j++)
            {
                if(mp.find(make_pair(i,j))==mp.end())
                {
                    res=max(res,degree[i]+degree[j]);
                }
                else
                    res=max(res,degree[i]+degree[j]-1);
            }
        }
        return(res);
    }
};