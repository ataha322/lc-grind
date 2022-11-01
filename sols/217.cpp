class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        
        for (int num : nums) {
            auto it = mySet.find(num);
            if (it != mySet.end())
                return true;
            else mySet.insert(num);
        }
        
        return false;
    }
};
