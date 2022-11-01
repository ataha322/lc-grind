class Solution {
public:
    int climbStairs(int n) {
        int num1 = 1, num2 = 1;
        
        for (int i = 0; i < n-1; i++) {
            int tmp = num1;
            num1 += num2;
            num2 = tmp;
        }

        return num1;
    }
};
