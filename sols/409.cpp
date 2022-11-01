#include <unordered_map>
#include <string>
class Solution {
public:
    int longestPalindrome(std::string s) {
        std::unordered_map<char, int> myMap;

        for (char c : s) {
            auto it = myMap.find(c);
            if(it != myMap.end()) {
                it->second++;
            } else {
                myMap[c] = 1;
            }
        }

        int maxOdd = 0;
        int totalEven = 0;
        int totalOdd = 0;
        for (auto elem : myMap) {
            if (elem.second % 2 == 0) {
                totalEven += elem.second;
            } else {
                totalOdd += elem.second - 1;
                maxOdd = std::max(maxOdd, elem.second);
            }
        }
        
        int ret;
        if (maxOdd > 0) {
            ret = totalEven + totalOdd + 1;
        } else {
            ret = totalEven;
        }

        return ret;

    }
};