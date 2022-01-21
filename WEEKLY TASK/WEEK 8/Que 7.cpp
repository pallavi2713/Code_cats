//Given an m x n matrix, return true if the matrix is Toeplitz. Otherwise, return false.
//A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix)
 {
            int a=matrix.size();
            int b=matrix[0].size();
        
        for(int i=0;i<a-1;i++)
          for(int j=0;j<b-1;j++)
               if(matrix[i][j]!=matrix[i+1][j+1])
                   return false;
        return true;
    }
};