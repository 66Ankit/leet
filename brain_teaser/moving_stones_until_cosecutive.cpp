// beats 100%

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
     
        vector<int> A={a,b,c};
        sort(A.begin(),A.end());
        if(A[1]-A[0]==1&&A[2]-A[1]==1)
            return {0,0};
        else if(A[1]-A[0]==1||A[2]-A[1]==1)
            return {1,max(A[1]-A[0]-1,A[2]-A[1]-1)};
        else if(A[1]-A[0]==2||A[2]-A[1]==2)
            return{1,A[1]-A[0]-1+A[2]-A[1]-1};
        else
            return{2,A[1]-A[0]-1+A[2]-A[1]-1};
        
    }
};