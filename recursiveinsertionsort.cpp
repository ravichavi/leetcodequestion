#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> recursiveinsertionSort(vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums;
        }
        int key = nums.back();
        nums.pop_back();
        vector<int> sortedSubArray = recursiveinsertionSort(nums);
        sortedSubArray.push_back(key);
        int i = sortedSubArray.size() - 2;
        while (i >= 0 && sortedSubArray[i] > key) {
            swap(sortedSubArray[i], sortedSubArray[i + 1]);
            i--;
        }
        return sortedSubArray;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {64, 25, 12, 22, 11};
    vector<int> result = sol.recursiveinsertionSort(nums);
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}