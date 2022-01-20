//To generate an n x n matrix filled with elements from 1 to n2 in spiral order.

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

      vector<vector<int>> res(n,vector<int>(n,0));
        int d = n - 1;
        int val=1;
        for(int a = 0;a < n && d >= 0;a++,d--){
            if(a == d) res[a][d] = val++;
            else{
                for(int i = a; i < d; i++) res[a][i] = val++;
                for(int i = a; i < d; i++) res[i][d] = val++;
                for(int i = d; i > a; i--) res[d][i] = val++;
                for(int i = d; i > a; i--) res[i][a] = val++;
            }
        }
        
        return res;
        
        
        
    }
};