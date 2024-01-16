class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0 ;
        int end = nums.size()-1;

        int mid = start + ( end - start )/2;

        while(start<=end){
            if(nums[mid]==target){
                return mid ;
            }
            else if (nums[mid]>target){
                end = mid - 1;
            }
            else
                start = mid + 1 ;

                mid = start + ( end - start )/2;
        }
        // int j = 0 ;
        //  int n = nums.size()-1;
        // if(start>end ){
        //     for(int i = 0 ; i<n ; i++){
        //         if(nums[i]<target)
        //             j++;
        //     }

        // }
        return start ;
    }
};