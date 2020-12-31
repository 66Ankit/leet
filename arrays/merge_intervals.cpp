// beats 80% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:    
    vector<vector<int>> merge(vector<vector<int>>& A) {
        
        sort(A.begin(),A.end());
        
        vector<vector<int>> res;
        int i=1,n=A.size();
        
        res.push_back(A[0]);
        int k=0;
        while(i<n)
        {
            if(res[k][1]>=A[i][0]&&res[k][1]<A[i][1])
            {
                res[k][1]=A[i][1];
            }
            else if(res[k][1]<A[i][1])
            {
                k++;
                res.push_back(A[i]);
            }
            i++;
        }
        return(res);
        
    }
};