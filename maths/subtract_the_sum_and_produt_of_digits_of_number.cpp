
#include<bits/stdc++.h>
using  namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum=0,prod=1;
        int dig;
        while(n!=0)
        {
            dig=n%10;
            n=n/10;
            sum+=dig;
            prod*=dig;
        }
        
        return(prod-sum);
    }
};