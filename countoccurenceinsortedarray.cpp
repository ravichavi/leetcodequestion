#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        // Your code goes here
             vector<int> v;
        bool flag=false;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==target){
                v.push_back(i);
            }
        }
        return v.size();
    }
};
int main(){
    Solution sol;
    vector<int> v={1,2,3,4,5,6};
    int k=sol.countOccurrences(v,3);
    cout<<k;
}