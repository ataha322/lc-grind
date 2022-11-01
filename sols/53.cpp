#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currSum = 0;

        for (int i : nums) {
            currSum = max(currSum + i, i);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};