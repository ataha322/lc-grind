#include <string>
#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.empty())
            return true;
        else if (s.length() == 1)
            return false;

        stack<char> st;
        char top;
        for (int i = 0; i < s.length(); i++) {
            if (!st.empty())
                top = st.top();
            else
                top = '-';

            if (s[i] == ')') {
                if (top != '(') {
                    return false;
                } else {
                    st.pop();
                    continue;
                }
            } else if (s[i] == ']') {
                if (top != '[') {
                    return false;
                } else {
                    st.pop();
                    continue;
                }
            } else if (s[i] == '}') {
                if (top != '{') {
                    return false;
                } else {
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        if (st.empty())
            return true;
        return false;
    }
};

int main() {
    Solution sol;
    cout << sol.isValid("()[]{}") << endl;
}