// beats 54% in runtime


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPoisonedDuration(vector<int>& A, int T) {
        
        int n=A.size();
        if(n==0)
            return(0);
        int till=A[0]+T-1;
        int res=T;
        for(int i=1;i<n;i++)
        {
            if(A[i]>till)
            {
                till=A[i]+T-1;
                res+=T;
            }
            else
            {   
                res=res+(A[i]+T-1-till);
                till=A[i]+T-1;
                
            }
        }
        return(res);
        
    }
};