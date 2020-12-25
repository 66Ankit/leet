#include<bits/stdc++.h>
using namespace std;

// beats 67 % in runtime

class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {   
        vector<int> G[n];
        for(auto x:paths)
        {
            G[x[0]-1].push_back(x[1]-1);
            G[x[1]-1].push_back(x[0]-1);
        }
        vector<int> res(n);
        for(int i=0;i<n;i++)
        {
            vector<int> color(5);
            for(auto j:G[i])
            {
                color[res[j]]=1;  // checking the color of res[j] is available or not
            }
            for(int k=1;k<=4;k++)
            {
                if(color[k]==0)
                {
                    res[i]=k;     // assign the available color to ith node 
                    break;
                }
            } 
        }
        return(res);
    }
};