#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while (i < n) {
            if (arr[i] != i + 1  ) {
                int swapele = arr[i]-1;
                 swap(arr[i],arr[swapele]);
                 i++;
            } else {
               i++;
            }
        }
        return arr[n - 1];
    }
};

int main() {
    Solution solution;
    vector<int> arr = {4,3,1,4,2};
    int duplicate = solution.findDuplicate(arr);

    cout << "Duplicate: " << duplicate << endl;

    return 0;
}
