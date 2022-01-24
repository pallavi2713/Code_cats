class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& mat, int r, int c) {

    int m=mat.size();
  
       
        int q=0;
        
        vector<vector<int>>ans(r,vector<int>(c,0));
       if(r*c!=mat.size())
               return {};

        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][j]=mat[q];
                q++;
             }
        }
        return ans;
    }
    
};