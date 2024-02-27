#include <iostream>
#include <vector>

using namespace std;  // Use the std namespace

class Solution {
public:
    vector<vector<int>> solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
        if (index >= nums.size()) {
            ans.push_back(output);
            return ans;
        }

        ans = solve(nums, output, index + 1, ans);  // Update ans with the result of recursive call
        int element = nums[index];
        output.push_back(element);
        ans = solve(nums, output, index + 1, ans);  // Update ans with the result of recursive call

        // Backtrack by removing the last element to restore the previous state
        output.pop_back();
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<int> output;
    vector<vector<int>> ans;
    vector<vector<int>> result = solution.solve(nums, output, 0, ans);

    // Print the generated subsets
    cout << "Subsets:\n";
    for (const auto& subset : result) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}