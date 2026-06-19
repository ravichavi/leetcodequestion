#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> quickSort(vector<int>& nums) {
        quickSortHelper(nums, 0, nums.size() - 1);
        return nums;
    }
private:
    void quickSortHelper(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pi = partition(nums, low, high);
            quickSortHelper(nums, low, pi - 1);
            quickSortHelper(nums, pi + 1, high);
        }
    }
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (nums[j] < pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[high]);
        return i + 1;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {64, 25, 12, 22, 11};
    vector<int> result = sol.quickSort(nums);
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}
