#include <string>
#include <cctype>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        auto start = s.begin();
        auto end = s.end()-1;

        while (start < end) {
            if (!isalnum(*start)) {
                start++;
                continue;
            }
            if (!isalnum(*end)) {
                end--;
                continue;
            }
            
            if (tolower(*start) != tolower(*end))
                return false;
            
            start++;
            end--;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string str = "A man, a plan, a canal: Panama";
    cout << sol.isPalindrome(str) << endl;
}