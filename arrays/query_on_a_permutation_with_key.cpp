// beats 81% in runtime

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {

            
        vector<int> index(m,0);
        for(int i=0;i<m;i++)index[i]=i;
        
        vector<int> res;
        
        for(auto q:queries)
        {
            int temp=index[q-1];
            for(int j=0;j<m;j++)
            {
                if(index[j]<temp)
                {
                    index[j]++;
                }
            }
            
            index[q-1]=0;
            res.push_back(temp);
        }

        return(res);
    }
};