#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int t=nums[0];
        for(int i=0;i<nums.size();i++){//Time complexity: O(n), Space complexity: O(1)
           if(t<nums[i]){
            t=nums[i];
           }
        }
        return t;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3, 5, 2, 9, 1};
    int result = sol.largestElement(nums);
    cout << "The largest element is: " << result << endl;
    return 0;
}