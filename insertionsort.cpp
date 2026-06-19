#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> insertionsort(vector<int>& nums){
         int key=0;
         int k=0;
         for(int i=0;i<nums.size();i++){
            key=nums[i];
            k=i-1;
            while(k>=0 && nums[k]>key){
                nums[k+1]=nums[k];
                k--;
            }
            nums[k+1]=key;
         }
         return nums;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {64, 25, 12, 22, 11};
    vector<int> result = sol.insertionsort(nums);
    for(auto i : result) {
        cout << i << " ";
    }
    return 0;

}