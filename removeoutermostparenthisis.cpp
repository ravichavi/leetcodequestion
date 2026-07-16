#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        // Your code goes here
        stack<char> st;

        for(int i=1;i<s.size();i++){
            st.push(s[i]);
        }
        st.pop();
        string s1="";
        int size=st.size();
        for(int i=0;i<size;i++){
            s1+=st.top();
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1; 
    }
};
int main(){
    Solution sol;
    string s="({[]})";
    string s1=sol.removeOuterParentheses(s);
    cout<<s1;
}