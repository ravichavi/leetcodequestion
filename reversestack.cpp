#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    stack<int> reverseStack(stack<int> &st) {
        // Your code goes here
        stack<int> s;
        int t=st.size();
        for(int i=0;i<t;i++){
           s.push(st.top());
           st.pop();
        }
        return s;
    }
};
int main(){
    Solution sol;
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    stack<int> s=sol.reverseStack(st);
    stack<int> s2=s;
    int k=s2.size();
    for(int i=0;i<k;i++){
        cout<< s2.top();
        s2.pop();
    }
}
