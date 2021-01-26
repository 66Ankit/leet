class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        
        if(A.size()<=1)
            return A.size();
        int res=1;
        int count=1;
        int i=1;
        while(i<A.size()&&A[i]==A[i-1])
            i++;
        
        bool flag;
        if(i<A.size()&&A[i]>A[i-1])
        {
            flag=1;
            count=2;
        }
        else if(i<A.size()&&A[i]<A[i-1])
        {
            flag=0;
            count=2;
        }
        res=max(res,count); 
        i++;
        for(;i<A.size();i++)
        {
             
            if(flag==0&&A[i]>A[i-1])
            {
                count++;
                flag=1;
            }
            else if(flag==1&&A[i]<A[i-1])
            {
                count++;
                flag=0;
            }
            else if(A[i]==A[i-1])
            {
                count=1;
            }
            else
            {
                count=2;
            }
            res=max(res,count);
            
        }
        
        return res;
    }
};