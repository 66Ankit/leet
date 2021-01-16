// beats 100%

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& A, int C) {
        
        int Max=0;
        for(auto x:A)
            Max=max(Max,x);
        vector<bool> res;
        for(auto x:A)
        {
            if(x+C>=Max)
                res.push_back(true);
            else
                res.push_back(false);
        }
        
        return(res);
    }
};