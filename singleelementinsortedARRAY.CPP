#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i-1]!=nums[i]&&nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        if(nums.size()>=2 && nums[0]!=nums[1]){
            return nums[0];
        }
        else{
            return nums[nums.size()-1];
        }
    }
};