#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        // Your code goes here
        int count=0;
        bool flag=true;
        vector<vector<int>> v;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            for(int k=0;k<v.size();k++){
                if(v[k][0]==nums[i]){
                    flag=false;
                }
            }
            if(flag){
                v.push_back({nums[i],count+1});
            }
            count=0;
            flag=true;
        }
        return v;
    }
};
int main(){
    Solution sol;
    vector<int> nums={1,2,1,3,4,2};
    vector<vector<int>> result= sol.countFrequencies(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<  result[0].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}