class Solution {
public:
    int findMin(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int start = 0 ;
        int end = nums.size()-1;
        int mid;

      if(nums[0] < nums[end]){
            return nums[0];
        }
        else{
        while(start<end){
             mid = start + ((end-start)>>1);

            if(nums[mid]>=nums[0]){
                start = mid + 1 ;
            }
            else
             end = mid  ;
        }
        
        return nums[start];
        }
    }
};