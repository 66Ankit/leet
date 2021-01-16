// beats 99% 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& A) {
        
        int n=A.size();
        int i=0;
        while(i<n)
        {
            if(A[i]!=i)
            {
                swap(s[i],s[A[i]]);
                swap(A[i],A[A[i]]);
            }
            else
                i++;
        }
        
        return(s);
        
    }
};