class Solution {
public:
    string removeDuplicates(string s) {
        deque<char> deq;
        int len = s.size();
        string result;
        
        deq.push_front(s[0]);
        for (int i = 1; i < len; i++) {
            char curr = deq.front();
            if (s[i] != curr) {
                deq.push_front(s[i]);
            } else {
                deq.pop_front();
            }
        }

        while (!deq.empty()) {
            result.push_back(deq.back());
            deq.pop_back();
        }

        return result;
    }
};
