// reference CP algorithm (website)
#include<bits/stdc++.h>
using namespace std;

int power(int n,int p)
{
    int ans=1;
    while(p>0)
    {
        if(p%2==1)    
            ans=ans*n;
        n=n*n;
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
        int n,p;
        cin >>n >>p;
        cout <<power(n,p)<<endl;

    }
    return 0;
}

