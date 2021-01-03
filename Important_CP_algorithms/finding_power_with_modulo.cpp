// reference CP algorithm (website)
// same as power function except some changes

#include<bits/stdc++.h>
using namespace std;

int power(int n,int p,int mod)
{
    int ans=1;
    n=n%mod; //  different from power
    while(p>0)
    {
        if(p%2==1)    
            ans=ans*n%mod; // different form power
        n=n*n%mod;          // different from power
        p=p/2;
    }
    return(ans);
}

int main()
{
    int t;
    cin >>t;
    while(t>=1)
    {
        int n,p,mod;
        cin >>n >>p>>mod;
        cout <<power(n,p,mod)<<endl;

    }
    return 0;
}

