// beats 99%

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& A) {
     
        int n=A.size();
        int m=A[0].size();
        int res=0;
        for(int i=0;i<n;i++)
        {
           for(int j=1;j<m;j++)
           {
               A[i][j]=A[i][j-1]+A[i][j];
           }
            res=max(res,A[i][m-1]);
        }
        return(res);
    }
};