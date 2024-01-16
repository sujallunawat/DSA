class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        int row = image.size();
        int col = image[0].size();
         vector<vector<int>>finalans;
         int startrow = 0 ;
         int startcol = 0 ;
         int endcol = col - 1 ;
         int endrow = row - 1 ;

         while(startrow<=endrow){
             vector<int>ans;
                for(int index = endcol ; index>=startcol ; index--){
                        ans.push_back(image[startrow][index]);

                }
                finalans.push_back(ans);
                startrow++;
         }

    //   row = finalans.size();
    //       col = finalans[0].size();
    
        for(int i = 0 ; i<row ; i++){
            for(int j = 0 ; j<col ; j++){
                finalans[i][j] ^=   1 ;
            }
        }
        return finalans;
         
    }
};