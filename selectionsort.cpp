#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    vector<int> selectionSort(vector<int>& nums) {
        int l=0;
     for(int i=0;i<nums.size();i++){
        l=i;
        for(int j=i;j<nums.size();j++){
            if(nums[l]>nums[j]){
                l=j;
            } 
        }
        swap(nums[i],nums[l]);
     }
     return nums;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {64, 25, 12, 22, 11};
    vector<int> result = sol.selectionSort(nums);
    for(auto i : result) {
        cout << i << " ";
    }
    return 0;
}