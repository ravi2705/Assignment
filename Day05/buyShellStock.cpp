//  Best Time to Buy and Sell Stock
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if (n == 0) return 0;

    int buystock = prices[0];
    int maxprofit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] > buystock) {
            maxprofit = max(maxprofit, prices[i] - buystock);
        }
        buystock = min(buystock, prices[i]);
    }

    return maxprofit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;

    return 0;
}
