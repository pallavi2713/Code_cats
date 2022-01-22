class Solution {
// Determine the perimeter of the island.
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int a=grid.size();
        int b=grid[0].size();
        int c=0;
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
            
                if(grid[i][j]==1)
                {    if(i-1<0  || grid[i-1][j]==0)c++;
                     if(i+1>=a || grid[i+1][j]==0)c++;
                     if(j-1<0  || grid[i][j-1]==0)c++;
                     if(j+1>=b || grid[i][j+1]==0)c++;
                }
    return c;}
};
