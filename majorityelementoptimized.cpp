#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};
int main() {
    Solution obj;
    vector<int> nums = {3, 2, 3};
    int majorityNum = obj.majorityElement(nums);
    cout << "Majority element: " << majorityNum << endl;
    return 0;
}