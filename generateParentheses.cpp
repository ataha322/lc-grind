class Solution {
private:
    vector<string> res;
public:
    vector<string> generateParenthesis(int n) {
        sol(n, 0, 0, "");
        return res;
    }
    
    void sol(int n, int open, int close, string tmp) {
        if (open + close == 2*n)
            res.push_back(tmp);
        else if (close < open) {
            if (open < n)
                sol(n, open+1, close, tmp + '(');
            if (close < n)
                sol(n, open, close+1, tmp + ')');
        } else {
            sol(n, open+1, close, tmp + '(');
        }
    }
    
};
