// Container With Most Water
#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int lp = 0, rp = n - 1;
    int maxwater = 0;

    while (lp < rp) {
        int width = rp - lp;
        int len = min(height[lp], height[rp]);
        int area = width * len;

        maxwater = max(maxwater, area);

        if (height[lp] < height[rp]) {
            lp++;
        } else {
            rp--;
        }
    }

    return maxwater;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int result = maxArea(height);
    cout << "Maximum water that can be contained: " << result << endl;

    return 0;
}
