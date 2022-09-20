class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> charMap;
        int l = 0;
        int r = 0;
        int len = s.length();
        int minLen = INT_MAX;
        string res = "";
        
        for (char c : t) charMap[c]--;
        
        while (r < len) {
            charMap[s[r]]++;
            while (r - l + 1 < minLen && matches(charMap)) {
                res = s.substr(l, r - l + 1);
                minLen = res.length();
                charMap[s[l]]--;
                l++;
            }
            r++;
        }
        
        return res;
    }
    
    bool matches(unordered_map<char,int>& charMap) {
        for (auto elem : charMap) {
            if (elem.second < 0)
                return false;
        }
        return true;
    }
    
};
