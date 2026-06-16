#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> v;
        int count=0;
        int t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
               count=0;
            }
            else{
                count++;
                v.push_back(count);
            }
        }
        v.push_back(count);
        t=v[0];
        for(int i=0;i<v.size();i++){
             if(t<v[i]){
                t=v[i];
             }
        }
        return t;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int maxConsecutiveOnes = obj.findMaxConsecutiveOnes(nums);
    cout << "Maximum consecutive ones: " << maxConsecutiveOnes << endl;
    return 0;
}