#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j=0;
        for(int i=0;i<prices.size();i++){
            if(prices[j]>prices[i]){
                j=i;
            }
        }
        if(j!=(prices.size()-1)){
        int k=j+1;
        for(int i=j+1;i<prices.size();i++){
            if(prices[k]<prices[i]){
                k=i;
            }
        }
        return (prices[k]-prices[j]);
        }
        return 0;
    }
};
int main() {
    Solution obj;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = obj.maxProfit(prices);
    cout << "Maximum profit: " << profit << endl;
    return 0;
}