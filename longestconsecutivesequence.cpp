#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=1;
        int current=1;
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                current++;
            }
            else if(nums[i]==nums[i+1]){
              continue;
            }
            else {
                longest=max(longest,current);
                current=1;
            }
        }
        longest=max(current,longest);
        return longest;
        
    }
};
int main(){
    Solution s;
    vector<int> nums={100,4,200,1,3,2};
    cout<<s.longestConsecutive(nums);
}