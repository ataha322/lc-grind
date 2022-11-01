class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> deq;
        
        for (int l = 0; l < nums.size(); l++) {
            if (deq.front() == l - k)
                deq.pop_front();
            
            while (!deq.empty() && nums[deq.back()] < nums[l])
                deq.pop_back();
            
            deq.push_back(l);
            
            if (l - k  + 1 >= 0)
                res.push_back(nums[deq.front()]);
        }
        
        return res;
        
      
    }
};
