// beats 7% 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
   bool search(vector<int> A,int T)
    {
       int l=0,h=A.size();
       while(l<h)
       {
           int m=(l+h)/2;
           if(A[m]==T)
               return(true);
           else if(A[m]>T)
               h=m;
           else
               l=m+1;
       }
       return(false);
    }
    
    bool searchMatrix(vector<vector<int>>& M, int T) {
        
        bool flag=false;
        int n=M.size();
        int m=M[0].size();
        for(int i=0;i<n;i++)
        {
            if(M[i][0]<=T&&M[i][m-1]>=T&&search(M[i],T))
            {
                flag=true;
                break;
            }
        }
        return(flag);
        
    }
};