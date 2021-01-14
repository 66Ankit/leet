#include<bits/stdc++.h>
using namespace std;

int selectStock(int saving, vector<int> currentValue, vector<int> futureValue) {
    
     // similar to knapsack 0-1 
     int n=currentValue.size();
     vector<int> profit(n);
     for(int i=0;i<n;i++)
    {
            profit[i]=futureValue[i]-currentValue[i];
            cout <<profit[i]<<" ";
    }
    cout <<endl;
    for(int i=0;i<n;i++)
    {
            // profit[i]=futureValue[i]-currentValue[i];
            cout <<currentValue[i]<<" ";
    }
    cout <<endl;
    vector<vector<int>> dp(n+1,vector<int>(saving+1,0));
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=saving;j++)
        {
             if(j>=currentValue[i-1])
             {
                 dp[i][j]=max(dp[i-1][j-currentValue[i-1]]+profit[i-1],dp[i-1][j]);
             }
             else 
             {
                 dp[i][j]=dp[i][j-1];
             }   
        }
    }
     return(dp[n][saving]);
}
int main()
{
    int t;
    cin >>t;
    while(t>=1)
    {
        int s,n;
        cin >>s >>n;
        vector<int> c(n),f(n);
        for(int i=0;i<n;i++) cin >>c[i];
        for(int i=0;i<n;i++) cin >>f[i];

        cout <<"ans "<<selectStock(s,c,f)<<endl;

        t--;
    }
    return 0;
}