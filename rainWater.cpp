class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int l = 0;
        int r = size - 1;
        int volume = 0;
    
        while (l < r) {
            if (height[r] > height[l]) {
                int i = l+1;
                while (height[i] < height[l]) {
                    volume += height[l] - height[i];
                    i++;
                }
                l = i;
            } else {
                int j = r-1;
                while (height[j] < height[r]) {
                    volume += height[r] - height[j];
                    j--;
                }
                r = j;
            }
        }
        
        return volume;
    
    }
};
