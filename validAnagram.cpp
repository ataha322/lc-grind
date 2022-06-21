#include <queue>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        const int shift = 97;
        vector<int> zeroArr (26, 0);
        vector<int> myArr (zeroArr);

        for (char c : s)
            myArr[c - shift]++;
        for (char c : t)
            myArr[c - shift]--;

        if (myArr != zeroArr)
            return false;

        return true;
    }
};