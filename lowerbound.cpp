#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int index=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=x){
                 return i;
            }
        }
        return nums.size();
    }
};
int main(){
    Solution sol;
    vector<int> v={1,2,3,4,5,6};
    int k=sol.lowerBound(v,3);
    cout<<k;
}