#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];          
        int maxEnding = nums[0];     
        for (int i = 1; i < nums.size(); i++) {
        maxEnding = max(nums[i], maxEnding + nums[i]);
        res = max(res, maxEnding);
    }
    return res;
    }
};
int main(){
    Solution s;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<s.maxSubArray(nums);
}