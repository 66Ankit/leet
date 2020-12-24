#include<bits/stdc++.h>
using namespace std;

// beats 97% solutions in Runtime

class Solution {
public:
    
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n=rooms.size();
        queue<int> q;   // use of queue to simulate bfs
        q.push(0);       // pus start node to queue
        vector<bool> vis(rooms.size(),false);  // to keep track of visited nodes in graph 
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            vis[node]=true;
            for(auto x:rooms[node])  // iterate through all rooms connected to current room 
            {
                if(vis[x]==false)
                {
                    q.push(x); // push node x to  queue if it is not visted before
                }
            }
        }
        
        for(auto x:vis)
        {
            if(x==false)
                return(false);
        }
        
        return(true);
        
    }
};