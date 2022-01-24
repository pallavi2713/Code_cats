//Shift grid k times

class Solution {
public:
    
    vector<vector<int>> shift(vector<vector<int>>& grid,int m,int n) 
    {
       vector<vector<int> > v(grid.size(), vector<int>());
       
        for(int i=0;i<n;i++)
             for(int j=0;j<m;j++)
             {    if(j==0 && i==0)
                        v[0].push_back(grid[n-1][m-1]);
                  if(j<m-1)   
                        v[i].push_back(grid[i][j]);
                  if(j==m-1 && i<n-1)
                        v[i+1].push_back(grid[i][m-1]);
             }
        return v;
    }

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k)
    {
        vector<vector<int> > t(grid.size(), vector<int>());
        int n=grid.size();
        int m= grid[0].size();
        while(k--)
              grid=shift(grid,m,n);
    
      return grid;
    }
      
};