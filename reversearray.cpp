#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
      void reverse(vector<int>& arr){
        for(int i=0;i<arr.size()/2;i++){
            swap(arr[i],arr[arr.size()-1-i]);
        } 
    }
};
int main(){
    Solution obj;
    vector<int> arr={1,2,3,4,5};
    obj.reverse(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}