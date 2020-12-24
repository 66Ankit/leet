// beats 15% other solutions in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   
   vector<vector<int>> res; // final result array

   // find path passing graph by reference
   void findPath(vector<vector<int>> &graph,vector<bool> vis,int node,vector<int> temp)
    {
        if(node==graph.size()-1)
        {
            res.push_back(temp);
            return ;
        }
            for(auto x:graph[node])
            {
                 if(vis[x]==false)
                 {
                     vis[x]=true;
                     temp.push_back(x);
                     findPath(graph,vis,x,temp);
                     temp.pop_back();
                     vis[x]=false;
                 }
            }
        
        return ;
       
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool> vis(n,false);
        vector<int> temp;
        temp.push_back(0);
        vis[0]=true;
        for(auto x:graph[0])
        {   
            vis[x]=true; // to keep track of visited nodes
            temp.push_back(x);
            findPath(graph,vis,x,temp);
            vis[x]=false; // path from x node is explored now unvisit it .
            temp.pop_back();  // path form x to final ndoe is explored , now remove x form temp.
        }
        
        return(res);
    }
};