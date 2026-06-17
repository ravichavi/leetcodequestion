#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countelement(vector<int> v,int n){
        int count=0;
        for(int i=0;i<v.size();i++){
             if(v[i]==n){
                count++;
             }
        }
        return count;
    }
    int majorityElement(vector<int>& nums) {
        vector<vector<int>> v;
        for(int i=0;i<nums.size();i++){
            int t=countelement(nums,nums[i]);
            v.push_back({t,nums[i]});
        }
        int j=v[0][0];
        int t=0;
        for(int i=0;i<v.size();i++){
            if(j<v[i][0]){
                j=v[i][0];
                t=i;
            }
        }
        j=v[t][1];
        return j;
    }
};
int main() {
    Solution obj;
    vector<int> nums = {3, 2, 3};
    int majorityNum = obj.majorityElement(nums);
    cout << "Majority element: " << majorityNum << endl;
    return 0;
}