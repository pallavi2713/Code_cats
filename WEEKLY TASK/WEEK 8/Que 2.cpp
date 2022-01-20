//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

//You have to rotate the image in-place, which means you have to modify 
//the input 2D matrix directly.
//DO NOT allocate another 2D matrix and do the rotation

class Solution {
public:
    void rotate(vector<vector<int>>& b) {
        if (b.size() == 0)
        return;
   vector<vector<int> > v(b.size(), vector<int>());

    for (int i = b.size()-1; i >=0; i--)
    {
        for (int j = b.size()-1; j >=0; j--)
        {
            v[j].push_back(b[i][j]);
        }
    }

    b = v; 
         
    }
};