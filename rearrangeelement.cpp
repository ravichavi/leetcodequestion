#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                v1.push_back(nums[i]);
            }
            else{
                v2.push_back(nums[i]);
            }
        }
        nums.clear();
        nums.resize(v1.size() + v2.size());
        int k=0;
        int l=1;
        for(int i=0;i<v2.size();i++){
            nums[k]=v2[i];
            k+=2;
        }
        for(int i=0;i<v1.size();i++){
            nums[l]=v1[i];
            l+=2;
        }
          
        return nums;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1, 2, -1, -2, 4, 5, -3};
    vector<int> result = sol.rearrangeArray(nums);
    for(auto i : result) {
        cout << i << " ";
    }
    return 0;
}