#include <vector>
#include <string>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::vector<int> arr (26, 0);
        const int shift = 97;
        
        for (char c : magazine) {
            arr[c - shift]++;
        }

        for (char c : ransomNote) {
            arr[c - shift]--;
        }

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < 0)
                return false;
        }
        return true;
    }
};