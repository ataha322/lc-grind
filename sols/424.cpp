class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int len = s.length();
        int res = 0;
        unordered_map<char, int> charMap;
        
        while (r < len) {
            charMap[s[r]]++;
            
            while (r-l+1 > mostFreq(charMap) + k) {
                charMap[s[l]]--;
                l++;
            }
            
            res = max(res, r-l+1);
            r++;
        }
        
        return res;
    
    }
    
    int mostFreq(unordered_map<char, int>& charMap) {
        int mostFreq = 0;
        for (auto elem : charMap) {
            mostFreq = max(mostFreq, elem.second);
        }
        
        return mostFreq;
    }
};
