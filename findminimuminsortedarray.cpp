#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int> &arr)  {
      int min=arr[0];
      for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min=arr[i];
        }
      }
      return min;
    }
};