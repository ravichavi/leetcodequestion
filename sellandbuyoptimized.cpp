#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int minprices=prices[0];
    int profit=0;
    for(int i=0;i<prices.size();i++){
        minprices=min(minprices,prices[i]);
        profit=max(profit,prices[i]-minprices);
    } 
    return profit;
    }
};
int main() {
    Solution obj;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = obj.maxProfit(prices);
    cout << "Maximum profit: " << profit << endl;
    return 0;
}