#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
       for(int i=0;i<nums.size();i++){
          if(nums[i]<x && nums[i+1]>x){
            return vector<int>{nums[i],nums[i+1]};
          }
          if(nums[i]==x){
            return vector<int>{x,x};
          }
       }
       return vector<int>{-1};
    }
};
int main(){
    Solution sol;
    vector<int> v={1,2,3,4,5,6};
    vector<int> k=sol.getFloorAndCeil(v,3);
    for(auto i : k) {
        cout << i << " ";
    }
}