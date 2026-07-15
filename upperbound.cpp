#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int upperBound(vector<int> &nums, int x){
       for(int i=0;i<nums.size();i++){
            if(nums[i]>x){
                 return i;
            }
        }
        return nums.size();
    }
};
int main(){
    Solution sol;
    vector<int> v={1,2,3,4,5,6};
    int k=sol.upperBound(v,3);
    cout<<k;
}