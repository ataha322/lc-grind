class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxNum = nums[0];
        int count = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (count == 0) {
                count++;
                maxNum = nums[i];
            } else if (maxNum == nums[i]){
                count++;
            } else count--;
        }
        
        return maxNum;
    }
};
