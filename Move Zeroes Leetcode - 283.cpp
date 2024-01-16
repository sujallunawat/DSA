class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        vector<int> v;
       int  element = 0;

        for (int i=0; i<nums.size(); i++){

            if (nums[i]==0){
                element = element +1;
            }

            else if (nums[i]!=0){
                v.push_back(nums[i]);
            }
        }

        for (int i=0; i<element; i++){
            v.push_back(0);
        }

        nums.clear();

        for (int i=0; i<v.size(); i++){

            nums.push_back(v[i]);
        }


        
    }
};