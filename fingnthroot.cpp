#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int NthRoot(int N, int M) {
       int num=0;
       for(int i=0;i<M;i++){
        if(pow(i,N)==M){
          return i;
        }
       }
       return -1;
    }
};
int main(){
    Solution sol;
    int k=sol.NthRoot(3,64);
    cout<<k;
}