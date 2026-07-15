#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        vector<int> v;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                v.push_back(i);
                flag=true;
            }
        }
        if(flag){
            return vector<int>{v[0],v[v.size()-1]};
        }
        return vector<int>{-1,-1};
    }
};
int main(){
    Solution sol;
    vector<int> v={1,2,3,4,5,6};
    vector<int> k=sol.searchRange(v,3);
    for(auto i : k) {
        cout << i << " ";
}
}