// beats 65% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
     
        int n=nums.size();
        vector<bool> vis(n,false);
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                int count=0;
                int x=i;
                while(vis[x]==false)
                {   vis[x]=true;
                    count++;
                    x=nums[x];
                }
                res=max(res,count);
            }
        }
        return(res);
    }
};