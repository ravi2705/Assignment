#include <bits/stdc++.h>
using namespace std;

vector<int> calculateSpan(vector<int>& prices) {
    stack<pair<int, int>> st; // pair -> {price, span}
    vector<int> result;

    for (int price : prices) {
        int span = 1;
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
        result.push_back(span);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<int> spans = calculateSpan(prices);

    cout << "Stock spans: ";
    for (int span : spans) {
        cout << span << " ";
    }
    cout << endl;

    return 0;
}
