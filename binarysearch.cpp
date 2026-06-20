#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h=nums.size()-1;
        int l=0;
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
        return -1;
    }
};
int main(){
    Solution sol;
    vector<int> nums={-1,0,3,5,9,12};
    int target=9;
    int result=sol.search(nums,target);
    cout<<result;
    return 0;
}