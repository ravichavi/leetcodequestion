#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int min=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]<nums[min]){
            min=i;
        }
      }
      return nums.size()-min;
    }
};
int main(){
    Solution sol;
    vector<int> v={4,5,6,2,3};
    int k=sol.findKRotation(v);
    cout<<k;
}