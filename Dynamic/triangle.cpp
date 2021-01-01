// beats 89% of slution in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n=triangle.size();
        for(int i=n-2;i>=0;i--)
        {
            
            for(int j=0;j<triangle[i].size();j++)
            {
                if(j==0)
                {
    triangle[i][j]=min(triangle[i+1][j],triangle[i+1][j+1])+triangle[i][j];
                }
                else
                {
    triangle[i][j]=min(triangle[i+1][j],triangle[i+1][j+1])+triangle[i][j];
                }
                
            }
        }
        
        return(triangle[0][0]);
        
    }
};