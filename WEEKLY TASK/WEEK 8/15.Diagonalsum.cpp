class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int sum=0;
        int m=mat.size();int n=mat[0].size();
        for(int i=0;i<m;i++)
              sum+=mat[i][i]+mat[m-i-1][i]; 
             
        if((m*n)%2!=0)        
            sum-=mat[m/2][m/2];

     return sum;
       }
        
    
};