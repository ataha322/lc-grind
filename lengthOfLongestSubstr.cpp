class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int start = -1;
        vector<int> chars (256, -1);
        
        for (int i = 0; i < s.length(); i++) {
            if (chars[s[i]] > start) {
                start = chars[s[i]];   
            }
            chars[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
