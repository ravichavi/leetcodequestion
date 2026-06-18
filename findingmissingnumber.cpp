#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return nums.size();
    }
};
int main(){
    Solution sol;
    vector<int> nums = {3, 0, 1,2,4};
    int result = sol.missingNumber(nums);
    cout << result << endl;
    return 0;
}