#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
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
        int k=0;
        for(int i=0;i<v.size();i++){
             if(v[i][1]>v[k][1]){
                k=i;
             }
        }
        return v[k][0];
    }
};
int main(){
    Solution sol;
    vector<int> nums={ 0,0,0,1,2 };
    int n=sol.mostFrequentElement(nums);
    cout<<n<<endl;

}