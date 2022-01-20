//PRINT MATRIX IN SPIRAL ORDER
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& b)
    {
        
        vector<int> v;
        
        int row=b.size();
        int col=b[0].size();
        int total=row*col;
        int count =0;
        int rowend=row-1; int colend=col-1;int strow=0;int stcol=0;
        
        while(count<total)
        {
         for(int m=stcol;m<=colend && count<total;m++){
             v.push_back(b[strow][m]);
             count++;}
         strow++;
            
         for(int i=strow;i<=rowend && count<total;i++){
             v.push_back(b[i][colend]);
             count++;}
         colend--;
         
         for(int j=colend;j>=stcol && count<total;j--){
             v.push_back(b[rowend][j]);
             count++;}
         rowend--;
         
         for(int k=rowend;k>=strow && count<total;k--){
             v.push_back(b[k][stcol]);
             count++;}
         stcol++;   
        } 
        return v;
    }      
};