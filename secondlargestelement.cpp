#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int l=nums[0],sl=-1;
        for(int i=0;i<nums.size();i++){//Time complexity: O(n), Space complexity: O(1)
            if(l<nums[i]){
                l=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>sl && nums[i]<l){
                sl=nums[i];
            }
        }
      return sl;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3, 5, 2, 9, 1};
    int result = sol.secondLargestElement(nums);
    cout << "The second largest element is: " << result << endl;
    return 0;
}