// beats 100% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        
        int n=A.size();
        int m=A[0].size();
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                if(j==0)
                {
                    A[i][j]=min(A[i+1][j+1],A[i+1][j])+A[i][j];
                }
                else if(j==m-1)
                {
                    A[i][j]=min(A[i+1][j-1],A[i+1][j])+A[i][j];   
                }
                else
                {
                    A[i][j]=min(A[i+1][j+1],min(A[i+1][j],A[i+1][j-1]))+A[i][j];
                }
            }
        }
        int res=INT_MAX;
        for(int i=0;i<m;i++)
            res=min(res,A[0][i]);
        
        return(res);
        
    }
};