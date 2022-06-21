#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int min = 0;
        int max = nums.size() - 1;

        while (min <= max) {
            int mid = (max - min) / 2 + min;
            
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                min = mid + 1;
            } else {
                max = mid - 1;
            }
        }
        return -1;
    }
};

