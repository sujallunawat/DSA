class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          int start = 0, end = nums.size() - 1;

        int mid;
        int ans = -1;
        while(start <= end){
            mid = start + (end - start)/2;
            if(nums[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        int ans2 = -1;
        start = 0, end = nums.size() - 1;

         mid = start + (end - start)/2;
        

        while(start<=end){
            if(nums[mid]==target){
                ans2=mid;
                start = mid + 1 ;
            }
            if (nums[mid]>target){
                end = mid - 1;
            }
            else {
                start = mid + 1 ;
            }

            mid = start + (end - start)/2;

        }
        return {ans,ans2};

    }
};