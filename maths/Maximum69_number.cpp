#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        int temp=num,Max=INT_MIN,i=1;
        vector<int> A;
        while(temp!=0)
        {
            A.push_back(temp%10);
            temp=temp/10;
        }
        bool flag=true;
        int res=0;
        for(int i=A.size()-1;i>=0;i--)
        {
            if(flag&&A[i]==6)
            {
                A[i]=9;
                flag=false;
                res=res*10+9;
            }
            else
            {
                res=res*10+A[i];
            }
        }
        
    return(res);
        
    }
};