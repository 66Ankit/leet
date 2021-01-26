class Solution {
public:
    int maxScore(vector<int>& A, int k) {
        int left=0,n=A.size();
        for(int i=0;i<n&&i<k;i++)
            left+=A[i];
        int right=0;
        int res=left;
        for(int i=0;i<k;i++)
        {   left-=A[k-1-i];
            right+=A[n-1-i];
            if(left+right>res)
                res=left+right;
        }
        return res;
    }
};