//Given an n x n matrix where each of the rows and columns is sorted in ascending order,
// return the kth smallest element in the matrix     

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int p ){
        int n=matrix.size();
        int m=matrix[0].size();
        int k[n*m];
        int s=0;
        int t=n*m;
        
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[0].size();j++){
                k[s]=matrix[i][j];s++;}
     
        sort(k,k+t);        
        return k[p-1];
    }
};