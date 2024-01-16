class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
         vector<vector<int>>ans;
        vector<int>temp;


        int k = 0 ;
        if(m*n != original.size()) return {};
   
         for(int i = 0  ; i<m ; i++){
             for(int j = 0 ; j<n ; j++){
                  
                  temp.push_back(original[k]);
                  k++;
             }
             ans.push_back(temp);
             temp.clear();
         }

         return ans;
    }
};