class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int tmp = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            tmp = tmp ^ nums[i];
        }

        return tmp;
    }
};
