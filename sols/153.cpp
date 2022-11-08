class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int mid = 0;
        int minimum = INT_MAX;

        while (l <= r) {
            mid = (r-l) / 2 + l;

            if (nums[mid] >= nums[l]) {  //the left half is sorted
                minimum = min(minimum, nums[l]);
                l = mid + 1;
                continue;
            }  

            if (nums[mid] <= nums[r]) {  //the right half is sorted
                minimum = min(minimum, nums[mid]);
                r = mid - 1;
                continue;
            }

            l++;
            r--;
        }

        return minimum;
    }
};
