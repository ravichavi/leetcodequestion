#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int floorSqrt(int n)  {
        int min=0;
      for(int i=1;i<n/2;i++){
        if(i*i<=n){
            min=i;
        }
      }
      return min;
    }
};
int main(){
    Solution sol;
    int k=sol.floorSqrt(99);
    cout<<k;
}