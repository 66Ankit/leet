#include<bits/stdc++.h>
using namespace std;

// beats 45% of solutions in runtime
// source :https://cs.stackexchange.com/questions/19707/find-the-minimum-number-of-vertices-in-a-directed-graph-from-which-the-other-ver

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) { 
        vector<int> res;
        vector<int> inNode(n,0);
        for(auto edge:edges)
        {
            inNode[edge[1]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(inNode[i]==0)
                res.push_back(i);
        } 
        return(res);
    }
};