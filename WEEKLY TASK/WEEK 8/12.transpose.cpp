class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> v(matrix[0].size(), vector<int>());
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)
            {
              v[j].push_back(matrix[i][j]);   
            }}
        return v;
    }
};