class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> myMap;
        
        for (auto str : strs) {
            string tmp = str;
            sort(tmp.begin(), tmp.end());
            myMap[tmp].push_back(str);
        }
        
        for (auto item : myMap) {
            result.push_back(item.second);
        }
        
        return result;
    }
};
