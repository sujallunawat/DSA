class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int j = nums.size()-1; ;
        int i = 0 ;
         int rev = nums.size()-1;
        while(i<=j){
                if(abs(nums[i]) > abs(nums[j])){
                        ans[rev--] = nums[i] * nums[i];
                        i++;
                }
                else{
                       ans[rev--] =  nums[j] * nums[j]; 
                        j--;
                    }
        }
        return ans;
    }
};