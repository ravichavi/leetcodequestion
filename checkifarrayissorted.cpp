#include<bits/stdc++.h>
using namespace std;
    class Solution {
public:
    int issorted(vector<int> v){
        int t=0;
          for(int i=0;i<v.size()-1;i++){//Time complexity: O(n), Space complexity: O(1)
            if(v[i]>v[i+1]){
                t=1;
            }
          }
          return t;
    }
    vector<int> rotate(vector<int> v,int n){
        vector<int> v2;
        for(int i=v.size()-n;i<v.size();i++){//Time complexity: O(n), Space complexity: O(n)
            v2.push_back(v[i]);
        }
        for(int i=0;i<v.size()-n;i++){
            v2.push_back(v[i]);
        }
        return v2;
    }
    bool check(vector<int>& nums) {//Time complexity: O(n^2), Space complexity: O(n)
        for(int i=0;i<nums.size();i++){
            vector<int>v3=rotate(nums,i);
            if(issorted(v3)==0){
                return true;
            }
        }
        return false;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3, 4, 5, 1, 2};
    bool result = sol.check(nums);
    cout << "Is the array sorted after rotation? " << (result ? "Yes" : "No") << endl;
    return 0;
}