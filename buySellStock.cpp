#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN;
        int minVal = INT_MAX;

        for (int i = 0; i < prices.size(); i++) {
            minVal = min(minVal, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minVal);
        }

        if (maxProfit < 0) return 0;
        return maxProfit;
    }
};  

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0;
//         int start = 0;
//         int end = 1;

//         while(end < prices.size()) {
//             if (prices[start] < prices[end])
//                 maxProfit = max(maxProfit, prices[end] - prices[start]);
//             else
//                 start = end;
//             end++;
//         }
//         return maxProfit;
//     }
// };  