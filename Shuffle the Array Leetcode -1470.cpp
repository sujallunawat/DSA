class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // int j = n+1;
        int i = 0;
        vector<int> ans;
        while(ans.size()!=(n<<1)){
             ans.push_back(nums[i]);
             ans.push_back(nums[i+n]);
             i++;
        }
        
        return ans;
    }
};