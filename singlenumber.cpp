#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i=i+2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return nums.back();
    }
};
int main() {
    Solution obj;
    vector<int> nums = {4, 1, 2, 1, 2};
    int singleNum = obj.singleNumber(nums);
    cout << "Single number: " << singleNum << endl;
    return 0;
}