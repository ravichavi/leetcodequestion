#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v2;
        
        for(int i=0;i<numRows;i++){
            vector<int>v(i+1,1);
            for(int j=1;j<i;j++){
               v[j]=v2[i-1][j-1]+v2[i-1][j];
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