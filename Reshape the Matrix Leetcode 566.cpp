#include <vector>

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans;
        int row = mat.size();
        int col = mat[0].size();

        if (c * r != row * col) return mat;

        int a = 0;
        int b = 0;

        for (int i = 0; i < r; i++) {
            vector<int> temp;  // Reset temp vector for each new row
            for (int j = 0; j < c; j++) {
                temp.push_back(mat[a][b]);
                b++;
                if (b == col) {
                    b = 0;
                    a++;
                    if (a == row) {
                        a = 0;
                    }
                }
            }
            ans.push_back(temp);
        }

        return ans;
    }
};