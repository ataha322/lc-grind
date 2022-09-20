class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1chars (26,0);
        int len = s1.length();
        int l = 0;
        int r = len-1;
        
        
        for (char c : s1)
            s1chars[c - 'a']++;
        
        
        while (r < s2.length()) {
            if (isPerm(s1chars,s2,l,r))
                return true;
            l++; r++;
        }
        return false;
        
    }
    
    bool isPerm(vector<int> s1chars, string& s2, int l, int r) {
        while (l <= r) {
            s1chars[s2[l] - 'a']--;
            l++;
        }
        
        for (int n : s1chars) {
            if (n != 0)
                return false;
        }
        return true;
    }
};
