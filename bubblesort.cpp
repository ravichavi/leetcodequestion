#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
         for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    swap(nums[j],nums[i]);
                }
            }
         }
         return nums;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {5, 2, 9, 1, 5, 6};
    vector<int> result = sol.bubbleSort(nums);
    for(auto i : result) {
        cout << i << " ";
    }
    return 0;
}