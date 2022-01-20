//Given an m x n integer matrix matrix, if an element is 0, 
//set its entire row and column to 0's,
// and return the matrix.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int s=matrix.size();
        int sz=matrix[0].size();
        
        vector<bool> row(s,false);
        vector<bool> col(sz,false);
        
        for(int i=0;i<s;i++)
            for(int j=0;j<sz;j++){
                 if(matrix[i][j]==0)
                 { row[i]=true;
                    col[j]=true;}}
                
        for(int i=0;i<s;i++)
            for(int j=0;j<sz;j++)
                if(row[i]==1 || col[j]==1)
                    matrix[i][j]=0;
}};