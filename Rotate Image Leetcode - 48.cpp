class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row  = matrix.size();
        int col = matrix[0].size();

        int startrow = 0 ;
        int startcol = 0 ;
        int endcol = col - 1 ;
        int endrow = row - 1;
        for(int i = startrow ; i <= endrow ; i++){
            for(int j = 0 ; j <=i ; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }      
            for(int i = 0 ; i<row ; i++){
                reverse(matrix[i].begin(), matrix[i].end());
            }
     
            
    }
};