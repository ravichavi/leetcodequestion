#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int key=0;
        bool flag=true;
        vector<int> v;
      for(int i=0;i<nums.size();i++){
        key=nums[i];
        flag=true;
        for(int j=i+1;j<nums.size();j++){
          if(key<nums[j]){
            flag=false;
            break;
          }
        }
        if(flag){
        v.push_back(key);
        }
      }
      return v;
    }
};
int main(){
   Solution sol;
    vector<int> nums = {-3,4,5,1,-4,-5};
    vector<int> result = sol.leaders(nums);
    for(auto i : result) {
        cout << i << " ";
    }
    return 0;
}