class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = INT_MAX - 1;
        int result = r;

        while (l < r) {
            int k = (l+r)/2;
            int hrs = 0;
            for (int p : piles) {
                hrs += (p + k -1) / k;
            }
            if (hrs <= h) {
                r = k ;
            } else {
                l = k + 1;
            }
        }

        return l;
        

        


    }
};
