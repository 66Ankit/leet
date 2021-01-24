// beats 98 %

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int n=A.size();
        int left=0,right=0,k=0;
        int res=0;
        while(right<n)
        {
            if(A[right]==1)
            {
                right++;
            }
            else if(k!=K&&A[right]==0)
            { 
                k++;
                right++;
            }
            else
            {
                while(A[left]==1)
                    left++;
                left++;
                right++;
            }
            res=max(right-left,res);
        }
        return res;
    }
};