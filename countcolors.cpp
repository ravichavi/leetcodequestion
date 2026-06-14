#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int countnums(vector<int> v,int n){
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==n){
            count++;
        }
    }
    return count;
}
    void sortColors(vector<int>& nums) {
        int zeroes=countnums(nums,0);
        int ones=countnums(nums,1);
        int twos=countnums(nums,2);
        nums.clear();
      for(int i=0;i<zeroes;i++){
          nums.push_back(0);
      }  
      for(int i=0;i<ones;i++){
          nums.push_back(1);
      } 
      for(int i=0;i<twos;i++){
          nums.push_back(2);
      } 
    }
};
int main(){
    Solution sol;
    vector<int> nums={2,0,2,1,1,0};
    sol.sortColors(nums);
    cout<<"Sorted colors: ";
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}