//Given a m x n grid filled with non-negative numbers,
// find a path from top left to bottom right,
// which minimizes the sum of all numbers along its path.

class Solution {

    public:  
    int minPathSum(vector<vector<int>>& grid) {
    
        int a=grid.size();
        int b=grid[0].size();
        int dp[a][b];
        
        for(int i=a-1;i>=0;i--)
            for(int j=b-1;j>=0;j--)
                if(i==a-1 && j==b-1);
                else if(i==a-1)
                    grid[i][j]+=grid[i][j+1];
                else if(j==b-1)
                    grid[i][j]+=grid[i+1][j];
                else
                    grid[i][j]+=min(grid[i+1][j],grid[i][j+1]);
                
        return grid[0][0];
    }
};