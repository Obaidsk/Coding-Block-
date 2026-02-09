#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j< nums.size(); j++) {
                if (nums[i] < nums[j]) {
                    nums[i] = nums[i] + nums[j];
                    nums[j] = nums[i] - nums[j];
                    nums[i] = nums[i] - nums[j];
                }
            }
        }
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 2, 3, 1, 4};

    vector<int> sorted = sol.sortArray(nums);

    cout << "Sorted array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}