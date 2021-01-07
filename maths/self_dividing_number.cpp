#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
   bool check(int n)
    {
       if(n==0)
           return false;
       if(n/10==0)
           return(true);
       
       int temp=n,dig;
      while(n!=0)
      {
          dig=n%10;
          if(dig==0||(temp%dig)!=0)
              return(false);
         
          n=n/10;
      }
       return(true);
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
     
        vector<int> res;
        for(int i=left;i<=right;i++)
        {
            if(check(i))
                res.push_back(i);
        }
        return(res);
        
    }
};