// beats 33% in run time
// intution : convert the n*m gird to (n*3)*(m*3) grid 
// in this way each slah will be represented by  3 diagonl cells

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void fill(vector<vector<int>> &grid,int i,int j)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        if(i>=n||j>=m||i<0||j<0||grid[i][j]==1||grid[i][j]==2)
           return ;
        
        grid[i][j]=2;
        fill(grid,i+1,j);
        fill(grid,i-1,j);
        fill(grid,i,j+1);
        fill(grid,i,j-1);
    }
    
    int regionsBySlashes(vector<string>& grid) {
        
        int n=grid.size();
        int m=grid[0].length();
        
        
        vector<vector<int>> vec(n*3,vector<int>(m*3,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='/')
                {
                    for(int k=0;k<=1;k++)
                    {   
                        vec[i*3+1-k][j*3+1+k]=1;
                        vec[i*3+1+k][j*3+1-k]=1;
                    }
                }
                else if(grid[i][j]=='\\')
                {
                     for(int k=0;k<2;k++)
                    {   
                        vec[i*3+1-k][j*3+1-k]=1;
                        vec[i*3+1+k][j*3+1+k]=1;
                    }
                }
            }
        }
        
        
        cout <<n<<" "<<m<<endl;
        int res=0;
        for(int i=0;i<n*3;i++)
        {
            for(int j=0;j<m*3;j++)
            {
                if(vec[i][j]==0)
                {
                    res++;
                    fill(vec,i,j);
                }
            }
        }
        
        return(res);
        
    }
};

