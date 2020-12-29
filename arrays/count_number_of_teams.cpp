//beats 75% solutions

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
     
        int res=0;
        for(int i=1;i<rating.size();i++)
        {
            vector<int> a(2,0),b(2,0);
            for(int j=0;j<rating.size();j++)
            {
                if(rating[i]<rating[j])
                {
                    if(i<j)
                    {
                        a[0]++;
                    }
                    else
                    {
                        a[1]++;
                    }
                }
                if(rating[i]>rating[j])
                {
                    if(i<j)
                    {
                        b[0]++;
                    }
                    else
                    {
                        b[1]++;
                    }
                }
            }
            
            res=res+a[0]*b[1]+b[0]*a[1];
            
        }
        
        return(res);
    }
};