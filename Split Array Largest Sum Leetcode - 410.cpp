class Solution {
public:
      bool ispossible(vector<int> arr, int mid, int k) {
    int pagesum = 0;
    int studentCount = 1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > mid) {
            return false; // Impossible to split if any element is larger than mid
        }

        if (pagesum + arr[i] <= mid) {
            pagesum += arr[i];
        } else {
            studentCount++;
            pagesum = arr[i]; // Start a new subarray with this element
        }
    }

    return studentCount <= k;
}



    int splitArray(vector<int>& nums, int k) {
        int start = 0;
        int sum = 0 ;
        int ans = -1 ;
        for(int i = 0; i<nums.size();i++){
                sum += nums[i];
        }
        int end = sum ;

        while(start<=end){
            int mid = start + ((end - start)>>1);
            if(ispossible(nums , mid , k)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};