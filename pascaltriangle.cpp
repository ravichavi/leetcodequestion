#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int factorial(int n){
        if(n==0){
            return 1;
        }
        return n*factorial(n-1);
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v2;
        vector<int>v;
        for(int i=0;i<numRows;i++){
            v={};
            for(int j=0;j<=i;j++){
               int t=factorial(i)/(factorial(j)*factorial(i-j));
               v.push_back(t);
            }
            v2.push_back(v);
        }
        return v2;
    }
};
int main(){
    Solution sol;
    int numRows = 5;
    vector<vector<int>> result = sol.generate(numRows);
    for(auto row : result) {
        for(auto num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}