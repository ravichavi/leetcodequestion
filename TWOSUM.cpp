#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {//Time complexity: O(n^2), Space complexity: O(1)
        for(auto it=nums.begin(); it != nums.end(); ++it) {
            for(auto jt=it + 1; jt != nums.end(); jt++) {
                if (*it + *jt == target) {
                    return vector<int>{(int)(it - nums.begin()), (int)(jt - nums.begin())};
                }
            }
        }
        return {};
    }
};
int main(){
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    for(auto i : result) {
        cout << i << " ";
    }
    return 0;
}