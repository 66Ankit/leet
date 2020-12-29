// beats 47% 
// BFS solution
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        
        // 0 -> no color
        // 1 -> red color
        // -1 -> blue color
        vector<int> color(N+1,0);
        vector<int> G[N+1];
        for(auto x:dislikes)
        {
            G[x[0]].push_back(x[1]);
            G[x[1]].push_back(x[0]);
        }
        
        for(int i=0;i<N;i++)
        {   
            if(color[i]!=0)continue;
            
            color[i]=1;
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int node=q.front();
                int c=color[node];
                q.pop();
                
                for(auto x:G[node])
                {
                    if(color[x]==0)
                    {
                        color[x]=-c;
                        q.push(x);
                    }
                    else if(color[x]==c)
                    {
                        return(false);
                    }
                }
            }
        }
        
        return(true);
        
    }
};