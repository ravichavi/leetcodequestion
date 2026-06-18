#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        set<int> s;
        for(int i=0;i<nums1.size();i++){
            s.insert(nums1[i]);
        }
        for(auto i : s){
            v.push_back(i);
        }
        return v;
    }
};
int main(){
    Solution sol;
    vector<int> nums1 = {1, 2, 4, 5, 6};
    vector<int> nums2 = {2, 3, 5, 7};
    vector<int> result = sol.unionArray(nums1, nums2);
    for(auto i : result) {
        cout << i << " ";
    }
    return 0;
}