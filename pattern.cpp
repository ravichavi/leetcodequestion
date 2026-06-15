#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern7(int n) {
       for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout <<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout <<"*";
        }
        cout << endl;                   
       }
    }
};
int main() {
    Solution obj;
    int n = 5; // You can change this value to test with different sizes
    obj.pattern7(n);
    return 0;
}