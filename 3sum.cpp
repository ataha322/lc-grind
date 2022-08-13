class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ret;
        int l = 0;
        int r = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1])
                continue;
            
            l = i+1;
            r = nums.size() - 1;
            
            while (r > l) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum > 0)
                    r--;
                else if (sum < 0)
                    l++;
                else {
                    ret.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    while (nums[l] == nums[l-1] && l < r)
                        l++;
                }
            }
        }
        
        
        return ret;
    }
};
