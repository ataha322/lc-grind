class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int allMax = 0;
        int currMax = 0;
        
        int l = 0;
        int r = len - 1;
        
        while (l < r) {
            currMax = (r - l) * min(height[l], height[r]);
            allMax = max(allMax, currMax);
            if (height[l] > height[r])
                r--;
            else
                l++;
        }
        
        return allMax;
    }
};
