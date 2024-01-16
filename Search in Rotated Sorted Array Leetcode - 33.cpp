class Solution {
public:
  int getpivot(vector<int>& arr){
    int start = 0 ;
    int end = arr.size() - 1 ;
    while(start<end){
        int mid = start + (end-start)/2 ;
        if(arr[mid]>=arr[0]){
            start = mid + 1 ;
        }
        else
        {
            end = mid ;
        }
    }
    
    return start;
}

   int binarysearch(vector<int>& arr , int s , int e , int target){

        int start = s;
        int end = e ;
        int mid ;
        int key = target ;
        while(start<=end){
            mid = start + (end - start )/2 ;

            if(arr[mid]==key){
                return mid;
            }

            if(arr[mid]>key){
                end = mid - 1 ;
            }
            else
                start = mid + 1 ;
        }

        return -1 ;

    }



    int search(vector<int>& nums, int target) {
        int pivot = getpivot(nums);
        int n = nums.size();
        


        if (target>=nums[pivot] && target <= nums[n-1]){
          return  binarysearch(nums , pivot , n-1 , target);
        }
        else
            return binarysearch(nums , 0 , pivot -1 , target );
    }
};