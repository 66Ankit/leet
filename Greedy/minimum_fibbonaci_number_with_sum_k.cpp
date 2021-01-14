// beats 100% in runtime

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        
        if(k==0)
            return 0;
        
        if(k==1)
            return(1);
        if(k==2)
            return(1);
        
        int a=1,b=1;
        while(b<=k)
        {
            swap(a,b);
            b=a+b;
        }
       return (1+findMinFibonacciNumbers(k-a));
        
    }
};