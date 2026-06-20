#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid=l+((h-l)/2);
            if(nums[mid]<target){
                l=mid+1;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else{
                return mid;
            }
        }
        return l;
    }
};
int main(){
    Solution sol;
    vector<int> nums={1,3,5,6};
    int target=5;
    int result=sol.searchInsert(nums,target);
    cout<<result;
    return 0;
}