#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int key;
        bool flag=true;
        vector<int> v;
        for(int i=low;i<=high;i++){
            key=i;
            flag=true;
            for(int j=key;j/10!=0;j=j/10){
                int k=(j/10)%10;
                int t=j%10;
                if((k+1)!=t){
                    flag=false;
                   break;
                }
            }
            if(flag){
                v.push_back(key);
            }
            
        }
        return v;
    }
};
int main(){
    Solution sol;
    int low =100;
    int high=500;
    vector<int> result=sol.sequentialDigits(low,high);
    for(auto i : result) {
        cout << i << " ";
    }
    return 0;
}