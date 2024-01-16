#include <vector>

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n, vector<int>(n));

        int count = 1;
       
        int startcol = 0;
        int endcol = n - 1;
        int startrow = 0;
        int endrow = n - 1;
        int total = n * n;
        int count1 = 0;

        while(count1 <= total && count <= (n*n)){
            for(int index = startcol; count1 <= total && index <= endcol; index++){
                arr[startrow][index] = count++;
                count1++;
            } 
            startrow++;

            for(int index = startrow; count1 <= total && index <= endrow; index++){
                arr[index][endcol] = count++;
                count1++;
            } 
            endcol--;

            for(int index = endcol; count1 <= total && index >= startcol; index--){
                arr[endrow][index] = count++;
                count1++;
            }
            endrow--;

            for(int index = endrow; count1 <= total && index >= startrow; index--){
                arr[index][startcol] = count++;
                count1++;
            } 
            startcol++;
        }

        return arr;
    }
};
