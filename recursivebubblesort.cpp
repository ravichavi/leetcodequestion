#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> RECURSIVEbubbleSort(vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums;
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                swap(nums[i], nums[i + 1]);
            }
        }
        vector<int> subArray(nums.begin(), nums.end() - 1);
        subArray = RECURSIVEbubbleSort(subArray);
        subArray.push_back(nums.back());
        return subArray;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {64, 25, 12, 22, 11};
    vector<int> result = sol.RECURSIVEbubbleSort(nums);
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}
